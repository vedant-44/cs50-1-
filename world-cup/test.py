import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.DictReader(csv_file)
    for row in reader:
        team={row[0]:row[1]}
        lsteams.append(team)
print(lsteams[1])