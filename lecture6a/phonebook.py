import sys
if len(sys.argv)<2:
    print("No command line argument")
    sys.exit(1)
names=['Anthony','Kyrie','James']
for i in names:
    if sys.argv[1]==i:
        print("Found")
        sys.exit(0)
print("Not Found")
sys.exit(2)

