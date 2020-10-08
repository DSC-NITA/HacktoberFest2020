#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long nearestPowerOf2(long long N)  //Function to find out max power
    {
        long long count = 0, res, M;
        M = N;
        while (N > 0)          //To find out the max power of 2 
        {
            N = N / 2;
            if (N > 0)
            {
                count++;
            }
        }
        if (pow(2, count) >= M)   
        {
            res = pow(2, count);
            return res;
        }
        else
        {
            count++;
            res = pow(2, count);
            return res;
        }
      
    }
};
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.nearestPowerOf2(N) << endl;
    }
    return 0;
}
