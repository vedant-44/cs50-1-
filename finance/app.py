import os
import datetime
import pytz
from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    stocks_portfolio=db.execute("SELECT * FROM shares WHERE user_id=?",session["user_id"] )
    symbols={}
    total=0
    cash=db.execute("SELECT cash FROM users WHERE id=?",session["user_id"])
    for stock in stocks_portfolio:
          current=lookup(stock["stocksymbol"])
          symbols[stock["stocksymbol"]]=current["price"]
          total=total+current["price"]*stock["shares"]
    total=total+cash[0]["cash"]
    total=round(total,2)
    cash[0]["cash"]=round(cash[0]["cash"],2)
    return render_template("index.html",stocks_portfolio=stocks_portfolio,symbols=symbols,cash=cash,total=total)


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method=="POST":
        symbol=request.form.get('symbol1')
        shares=request.form.get('shares')
        stock=lookup(symbol)
        ist = pytz.timezone('Asia/Kolkata')
        transaction_time = datetime.datetime.now(ist).strftime('%Y-%m-%d %H:%M:%S')
        user=db.execute("SELECT * FROM users WHERE id=(?)",session["user_id"])
        shareinfo=db.execute("SELECT * FROM shares WHERE user_id=(?) AND stocksymbol=(?)",session["user_id"],symbol )
        if stock==None:
            return apology("Incorrect Symbol")
        if int(shares)<1:
            return apology("Invalid shares")
        if (stock["price"]*int(shares))>user[0]["cash"]:
            return apology("Insufficient Cash")
        db.execute("INSERT INTO transactions(stocksymbol,transaction_time,user_id,shares,price) VALUES(?,?,?,?,?)",symbol,transaction_time,session["user_id"],shares,stock["price"] )
        if len(shareinfo)==0:
            db.execute("INSERT INTO shares(stocksymbol,shares,user_id) VALUES(?,?,?)",symbol,int(shares),session["user_id"])
        else:
            db.execute("UPDATE shares SET shares=(?) WHERE user_id=(?) AND stocksymbol=(?)",shareinfo[0]["shares"]+int(shares),session["user_id"],symbol)
        db.execute("UPDATE users SET cash=(?) WHERE id=(?)",user[0]["cash"]-stock["price"]*int(shares),session["user_id"])
        return redirect('/')
    return render_template('buy.html')


@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    return apology("TODO")


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method=="POST":
        symbol=request.form.get("symbol")
        stock=lookup(symbol)
        if stock==None:
            return apology("Invalid Symbol")

        return render_template('quote_info.html',stock=stock)
    return render_template('quote.html')

@app.route("/register", methods=["GET", "POST"])
def register():

    if request.method=="POST":
        username1=request.form.get('username1')
        password1=request.form.get('password1')
        password2=request.form.get('password2')
        sameusername=db.execute("SELECT * FROM users WHERE username=(?)",username1)
        #Check various errors
        if not username1 or not password1 or not password2:
            return apology("All fiels required")
        elif password1!=password2:
            return apology("Password doesn't match")
        elif len(sameusername)!=0:
            return apology("Username is not available")

        #Insert new user in the database
        hash_password = generate_password_hash(password1, method='pbkdf2:sha256', salt_length=8)
        db.execute("INSERT INTO users(username,hash) VALUES(?,?)",username1,hash_password)

        #log in user
        rows=db.execute("SELECT * FROM users WHERE username=?",username1)
        session["user_id"] = rows[0]["id"]
        return redirect('/')
    else:
        return render_template('register.html')







@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    if request.method=="GET":
        stock_portfolio=db.execute("SELECT * FROM shares WHERE user_id=?",session["user_id"])
        return render_template('sell.html',stock_portfolio=stock_portfolio)
    #if method is post
    

