
using namespace std;


 // code to find the maximum value in a bitonic array


class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    for(int i=0;i<=n-2;i++)
	    {
	        if(arr[i+1]<arr[i])
	        {return arr[i];}
	    }
	    return arr[n-1];
	}
};

//  Driver Code Starts here.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  //  Driver Code Ends here