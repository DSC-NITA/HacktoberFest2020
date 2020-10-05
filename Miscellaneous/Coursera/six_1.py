L = None
S = None
while True:
    num = input("Enter a No.")
    if num == "done" :
        break
    try :
        num = int(num)
    except :
        num = ("Invalid")
        print(num)
        continue
    if S is None :
        S = num
    elif num < S :
        S = num
    if L is None :
        L = num
    elif num > L :
        L = num
print("Maximum is",L)
print("Minimum is",S)
