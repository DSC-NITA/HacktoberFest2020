#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char prev_rod,
                  char final_rod, char aux_rod) //Recursive function to perform disk shifts.
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << final_rod << " to rod " << prev_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, final_rod, aux_rod, prev_rod);
    cout << "Move disk " << n << " from rod " << final_rod << " to rod " << prev_rod << endl;
    towerOfHanoi(n - 1, aux_rod, prev_rod, final_rod);
}
int main()
{
    int n;
    cin >> n;                       //No of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}