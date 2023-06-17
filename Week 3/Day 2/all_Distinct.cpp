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
        int ara[n];
        map <int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            freq[ara[i]]++;
        }
        if ((n - freq.size()) % 2 == 1)
        {
            cout << freq.size() - 1 << endl;
        }
        else
        {
            cout << freq.size() << endl;
        }
    }
}