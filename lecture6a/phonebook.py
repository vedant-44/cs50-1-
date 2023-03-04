from sys import exit
name=input("Name:")
name=name.capitalize()
dictionary={'Vedant':'453432','Abhinav':'325234'}
for i in dictionary:
    if(i==name):
        print(f"Number: {dictionary[name]}")
        exit(0)
exit(1)

