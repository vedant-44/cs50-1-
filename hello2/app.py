from flask import Flask,render_template,request

app=Flask(__name__)

route@app("/")
def index():
    