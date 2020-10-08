#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int convertEvenBitToZero(long long int n) //Function to perform bit change
    {
        int count = 0, sum = 0, r, a = 0;
        while (n > 0)
        {
            r = n % 2;
            n = n / 2;
            if (count % 2 == 0)
            {
                r = 0;
                sum += r * pow(2, a);
            }
            else
            {
                sum += r * pow(2, a);
            }
            count++;
            a++;
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
