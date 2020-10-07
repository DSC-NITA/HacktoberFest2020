//Method 1:By using Algebra.
#include <iostream>
using namespace std;
int findMissingNo(int arr[], int len) //Function to find missing number
{
    int temp;
    temp = ((len + 1) * (len + 2)) / 2;
    for (int i = 0; i < len; i++)
        temp -= arr[i];
    return temp;
}
//Method 2:By using BIT Manipulation.
// Find the missing number in the given array
int getMissingNumber(int arr[], int n)
{
    // Compute XOR of all the elements in array
    int a = 0;
    for (int i = 0; i < n; i++)
        a = a ^ arr[i];

    // Compute XOR of all the elements from 1 to n+1
    for (int i = 1; i <= n + 1; i++)
        a = a ^ i;

    return a;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int missingNo = findMissingNo(arr, n);
    int getno = getMissingNumber(arr, n);
    cout << "Missing Number is: " << missingNo;
    return 0;
}