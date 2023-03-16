h=5
a=1
b=h-1
for i in range(h):
    for j in range(b):
        print('',end='')

    for j in range(a):
        print('#',end='')
    a+=1
    b-=1
    print()
