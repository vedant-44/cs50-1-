from cs50 import get_string
import sys
num=get_string('Number: ')
l=len(num)-1
sum=0
while l>=0:
    sum+=int(num[l])
    y= 2*int(num[l-1])
    if l-1>=0:
        if len(str(y))==2:
            sum+=int(str(y)[0])+int(str(y)[1])
        else:
            sum+=y
    l=l-2
print(sum)
x=sum%10
print(x)
a=int(num[0])*10+int(num[1])
b=[51,52,53,54,55]


if x!=0:
    print('INVALID')
    sys.exit(1)
elif (len(num)==13 or len(num)==16) and int(num[0])==4:
    print('VISA')
    sys.exit(0)
elif len(num)==15 and (a==34 or a==37):
    print('AMEX')
    sys.exit(0)
elif (len(num)==13 or len(num)==16) and (a in b):
    print('MASTERCARD')
    sys.exit(0)
else:
    print('INVALID')
    sys.exit(2)




