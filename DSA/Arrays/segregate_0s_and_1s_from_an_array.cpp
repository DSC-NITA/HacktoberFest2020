using namespace std;
// this is a program to Segregate 0s and 1s from a given array

int main() {
	int t=0,i=0,n=0,x=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int array[n];
	    for(i=0;i<=n-1;i++)
	    {cin>>array[i];
	        if(array[i]==0)
	        { x=x+1;}
	    }
	    for(i=1;i<=x;i++)
	    {cout<<"0 ";}
	    for(i=1;i<=n-x;i++)
	    {cout<<"1 ";}
       cout<<endl; x=0;	}
	return 0;
}