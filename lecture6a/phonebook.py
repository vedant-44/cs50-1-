import sys
if len(sys.argv)<2:
    print("No command line argument")
    sys.exit(1)
else:
    for i in sys.argv[1:]:
       print(f"{i}",end='')
    print()
    sys.exit(0)
