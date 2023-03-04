import sys
if len(sys.argv)<2:
    print("No command line argument")
    sys.exit(1)
else:
    print(f"{sys.argv[1]}")
    sys.exit(0)
