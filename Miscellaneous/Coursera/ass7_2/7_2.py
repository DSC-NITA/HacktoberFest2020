fx= input("Enter the name of file")
fh= open(fx)
x= 0
t= 0
for lx in fh:
    if not lx.startswith("X-DSPAM-Confidence:"):
        continue
    z= lx.find(":")
    v= lx[z+1:]
    v= v.strip()
    v= float(v)
    t= t+v
    x= x+1
o= t/x
print("Average spam confidence: ",o)
