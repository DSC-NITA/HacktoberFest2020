if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    arr.sort()
    for j in range(0,len(arr)-1):
         arr1=arr[::-1]
    for i in (0,len(arr1)-1):
        if(arr1[0]==arr1[i]):
             i+=1
    print(arr1[i+1])
