from sys import exit
name=input("Name:")
name=name.capitalize()
dictionary={'Vedant':'453432','Abhinav':'325234'}
if name in dictionary:
    print(f"Number:{dictionary[name]}")


