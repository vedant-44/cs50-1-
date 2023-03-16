from cs50 import get_int
while(True):
  h=get_int("Height:")
  if h>0 and h<9:
      break
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
