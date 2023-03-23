from cs50 import get_string
num=get_string('Number: ')
l=len(num)-1
sum=0
while l>=0:
    sum+=int(num[l])
    if l-1>=0:
        sum+=2*int(num[l-1])
    l=l-2
if sum%10!=0:
    print('Invalid')
else if (len(num)==13 or len(num)==16) and int num[0]==4:


