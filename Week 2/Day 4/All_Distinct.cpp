#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map <int, int> frq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }
        if ((n - frq.size()) % 2 == 1)
        {
            cout << frq.size() - 1 << endl;
        }
        else
        {
            cout << frq.size() << endl;
        }
    }
}