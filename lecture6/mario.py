def main():
  h=height()
  for i in range(h):
    print("#")












def height():
  while(True):
    try:
      h=int(input("Height: "))
      if h>0:
        return h
    except ValueError
       print("Not an integer")
main()