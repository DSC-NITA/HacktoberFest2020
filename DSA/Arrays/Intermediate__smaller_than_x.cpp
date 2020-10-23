


#include <bits/stdc++.h>
using namespace std;


 



// arr[]: This is the input array
// n: This is the size of input array
// k: find element smaller and closest to this. 
int immediateSmaller(int arr[], int n, int x)
{ int i=0;
  for(i=0;i<=n-1;i++)
  {
      if(arr[i]<x)
      {arr[i]=x-arr[i];}
  }
  for(i=1;i<=n-1;i++)
  {
      if(arr[i]<arr[0])
      {arr[0]=arr[i];}
  }
  if(arr[0]==x)
  {return -1;}
  else
  {return x-arr[0];}
    
}


// { The Driver Code Starts from here.

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code ends here.