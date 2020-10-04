fx= input("Enter file name")
fh= open(fx)
for line in fh:
    line= line.rstrip()
    line= line.upper()
    print(line)
