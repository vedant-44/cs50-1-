import csv
lsteams=[]
with open('2018m.csv') as csv_file:
    reader=csv.reader(csv_file,delimiter=',')
    for row in reader:
        print(row[0])
