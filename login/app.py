from flask import Flask,render_template,session,request
from flask_session import Session

app=Flask(__name__)

app.config["SESSION_PERMANENT"]=False
app.config["SESSION_TYPE"]="filesystem"
Session(app)

@app.route("/")
def index():
    if not Session.get("name"):
        return redirect("/login")
    return render_template("index.html")

@app.route("/login",methods=["POST","GET"]):
def login():
    if request.method == 'GET':
        return render_template('login.html')
    

