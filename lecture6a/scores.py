from cs50 import get_int
ls=[]
for i in range(3):
    a=get_int("Score:")
    ls.append(a)
average=sum(ls)/len(ls)
print(f"Average: {average}")