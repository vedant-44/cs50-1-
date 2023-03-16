from cs50 import get_int
while(h<=0 or h>8):
  h=get_int("Height:")
a=1
b=h-1
for i in range(h):
    for j in range(b):
        print(' ',end='')

    for j in range(a):
        print('#',end='')
    print('  ',end='')
    for j in range(a):
        print('#',end='')
    a+=1
    b-=1
    print()
