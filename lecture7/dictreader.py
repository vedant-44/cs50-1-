import csv
with open('favourites.csv') as file:
    reader=csv.DictReader(file)
    counts={}
    for row in reader:
        favourite=row['language']
        if favourite in counts:
            counts[favourite]+=1
        else:
            counts[favourite]=1
    



