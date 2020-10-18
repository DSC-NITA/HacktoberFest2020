/*........BUBBLE SORT.........*/
//....Time complexity for this algorithm is O(n^2)......

#include<iostream>
using namespace std;

void Bubble_Sort(int arr[],int n)
{
    int i,j,temp;
    for(i = 0; i < n-1; i++)
    {
        // count will track that if swapping is done or not...
        //if no swap is performed => array is sorted

        int count = 0;

        //In each iteration of the array we bubble out the largest element at last
        //and as last element is the largest,next time we run loop ignoring last element

        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];                 //Swapping elements
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
        if(count == 0)
            break;
    }
}

/*.......Driver Code.......*/
int main()
{
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Bubble_Sort(arr,n);
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
