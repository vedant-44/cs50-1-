from flask import Flask,render_template,request

app=Flask(__name__)
PARTICIPANTS={}

@app.route("/")
def index():
    return render_template('index.html')
@app.route("/msg",methods=['POST'])
def msg():
    name=request.form.get("name")
    sport=request.form.get("sport")
    PARTICIPANTS[name]=sport

    return render_template('msg.html')
@app.route("/participants")
def participants():
    return render_template('participants.html',participants=PARTICIPANTS)



