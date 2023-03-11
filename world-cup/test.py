import csv
team{}
lsteams[]
with open('2018m.csv') as csv_file:
    reader=csv.Dictreader(csv_file,fieldnames=['team','rating'])
    for row in reader:
        team={'team':'rating'}
        lsteams.append(team)
