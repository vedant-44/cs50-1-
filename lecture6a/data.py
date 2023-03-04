import csv
file=open("person.csv","a")
name=input("Name: ")
age=input("Age: ")
writer=csv.writer(file)
writer.writerow([name,age])
file.close()