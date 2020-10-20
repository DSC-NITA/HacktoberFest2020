//Bubble Sorting in Cpp
#include<iostream>
using namespace std;
void swapping(int &a, int &b)  
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) 
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) 
{
   for(int i = 0; i<size; i++) 
   {
      int swaps = 0;         //flag to detect any swap
      for(int j = 0; j<size-i-1; j++) 
      {
         if(array[j] > array[j+1]) 
         {       
            swapping(array[j], array[j+1]);
            swaps = 1;    //swap flag
         }
      }
      if(!swaps)
         break;      
   }
}
int main() 
{
   int n;
   cout << "Enter the number of Elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter Array Elements:" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   cout << "Input Array: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Sorted Array: ";
   display(arr, n);
}