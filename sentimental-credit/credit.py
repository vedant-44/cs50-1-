from cs50 import get_string
import sys
num=get_string('Number: ')
l=len(num)-1
sum=0
while l>=0:
    sum+=int(num[l])
    if l-1>=0:
        sum+=2*int(num[l-1])
    l=l-2
print(sum)
x=sum%10
print(x)
a=int(num[0])*10+int(num[1])
b=[51,52,53,54,55]


if x!=0:
    print('Invalid')
    sys.exit(1)
elif (len(num)==13 or len(num)==16) and int(num[0])==4:
    print('Visa')
    sys.exit(0)
elif len(num)==15 and (a==34 or a==37):
    print('Amex')
    sys.exit(0)
elif (len(num)==13 or len(num)==16) and (a in b):
    print('Mastercard')
    sys.exit(0)
else:
    print('Invalid')
    sys.exit(2)




