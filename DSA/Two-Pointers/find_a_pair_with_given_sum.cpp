/*
    two pointer technique is used to find if
    there is a pair in array whose sum = given_sum
*/
#include <bits/stdc++.h>

using namespace std;

bool isPairExist(const int *arr,const int &n,const int &given_sum) {
    // i is first pointer pointing to starting of array
    // and j is second pointer pointing to last element of array
    for (int i = 0, j = n - 1; i < j;)
    {
        //if pair if found
        if (arr[i] + arr[j] == given_sum)
            return true;
        // if sum of elements at current pair is less than given_sum.
        // move to higher values by incrementing i
        else if (arr[i] + arr[j] < given_sum)
            i++;
        //if sum of elements at current pair is more,
        // we move towards lower value by decrementing j
        else
            j--;
    }
    return false; // if no pair is found
}

int main() {
    int arr[5] = {1, 2, 4, 4, 5}; // dummy array for testing 
    int n = 5; //arr length
    int given_sum = 7;
    cout << boolalpha; // stream manipulator to show true or false instead of 0 or 1
    cout << isPairExist(arr, n, given_sum);
}