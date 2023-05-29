from flask import Flask,render_template,request

app=Flask(__name__)
PARTICIPANTS={}
SPORTS=['basketball','badminton','cricket']
@app.route("/")
def index():
    return render_template('index.html',sports=SPORTS)
@app.route("/msg",methods=['POST'])
def msg():
    name=request.form.get("name")
    sport=request.form.get("sport")
    if not name:
        return redirect('msg1.html')
    if sport not in SPORTS:
        return redirect('msg1.html')
    PARTICIPANTS[name]=sport


    return render_template('msg.html')
@app.route("/participants")
def participants():
    return render_template('participants.html',participants=PARTICIPANTS)



