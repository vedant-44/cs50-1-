from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template('index.html')
@app.route("/msg",methods=['POST'])
def msg():
     PARTICIPANTS={}
     
    return render_template('msg.html')
@app.route("/participants")
def participants():

