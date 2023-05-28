from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template('index.html')
@app.route("/msg")
def msg():
    return render_template('msg.html')