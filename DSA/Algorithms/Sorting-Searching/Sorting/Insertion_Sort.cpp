/*.......Insertion Sort........*/
/*........time complexity for this algorithm is O(n^2)........*/
#include<iostream>
using namespace std;

void Insertion_Sort(int arr[],int n)
{
    int i,j;
    for(i = 1; i < n; i++){
        int key = arr[i];                              //Declare element as key..
        for(j = i-1; j >= 0 && arr[j] > key; j--)      //find the correct position for the key...by traversing back in the array..
        {                                             //if element is greater than key then move it ahead one position...
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;                               //Insert the key at the correct position....
    }
}

//......Driver code......
int main()
{
    cout<<"enter the size of array: ";
    int n;
    cin>>n;                                        //Input size of array.....
    int arr[n];
    for(int i = 0; i < n; i++)                     //Taking Input in array.....
    {
        cin>>arr[i];
    }
    Insertion_Sort(arr,n);                       //Calling function.....
    cout<<"Sorted array is: ";                    //Printing Sorted array...
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
