# Palindrome Function
def isPalindrome(s):
    return s == s[::-1]
 
 
# Code
s = input()
ans = isPalindrome(s)
 
if ans:
    print("String is Palindrome")
else:
    print("String is Not Palindrome")