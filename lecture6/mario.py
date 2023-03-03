def main():
  h=height()
  for i in range(h):
    print("#")












def height():
  while(True):
    h=int(input("Height: "))
    if h>0:
      return h
main()