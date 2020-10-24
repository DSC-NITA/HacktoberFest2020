

class Solution {
  public:
    string isKrishnamurthy(int N) {
        int fact=1,x=0,i=0,sum=0,Z;
        Z=N;
        while(N!=0)
        {
            x=N%10;
            for(i=x;i>=1;i--)
            {fact=fact*i;}
            sum=sum+fact;
            N=N/10;
            fact=1;
        
        }
        if(Z==sum)
        {return "YES";}
        else
        {return "NO";}
    }
};

// { Driver Code starts from here.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}  //  The Driver Code Ends