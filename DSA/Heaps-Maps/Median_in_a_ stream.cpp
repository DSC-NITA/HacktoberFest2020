#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int med = 0;
    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<int>> r;
    while (n--)
    {
        int x;
        cin >> x;

        // Inserting in heap based on current median
        if (x > med)
            r.push(x);
        else
            l.push(x);

        // Balancing the heaps so as to get max difference==1
        if (l.size() - r.size() == 2)
        {
            int a = l.top();
            l.pop();
            r.push(a);
        }
        else if (r.size() - l.size() == 2)
        {
            int a = r.top();
            r.pop();
            l.push(a);
        }

        // Getting median from the heavier heap
        // If heaps are equal sized take mean of top of both
        if (l.size() - r.size() == 1)
            med = l.top();
        else if (r.size() - l.size() == 1)
            med = r.top();
        else
            med = (l.top() + r.top()) / 2;

        cout << med << endl;
    }

    return 0;
}