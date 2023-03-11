import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.DictReader(csv_file)
    for row in reader:
        print(row[0])
