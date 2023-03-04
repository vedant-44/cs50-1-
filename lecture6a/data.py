import csv
file=open("person.csv","a")
name=input("Name: ")
age=input("Age: ")

write=csv.DictWriter(file,fieldnames=["name","age"])
write.writerow({"name":name,"age":age})
