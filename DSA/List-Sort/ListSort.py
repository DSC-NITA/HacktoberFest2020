#Python code for list sorting  (List Sort can Sort both Int & Char)

input_string = input("Enter a list elements separated by space: ")
print("\n")         #Click Enter to Check Result
userList = input_string.split()
print("user list is: ", userList)
userList.sort()
print("Sorted List is: ",userList)