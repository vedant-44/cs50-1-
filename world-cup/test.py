import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.DictReader(csv_file)
    for row in reader:
        team={row['team']:row['rating']}
        lsteams.append(team)


