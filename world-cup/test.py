import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.DictReader(csv_file,fieldnames=['team','rating'])
    for row in reader:
        team={'team':'rating'}
        lsteams.append(team)
print(lsteams[1])