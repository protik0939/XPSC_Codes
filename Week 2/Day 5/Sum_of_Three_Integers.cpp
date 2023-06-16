#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int c = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            mp[i + j]++;
        }
    }

    for (int i = 0; i <= k; i++)
    {
        if (mp.find(s - i) != mp.end())
        {
            c += mp[s - i];
        }
    }

    cout << c << endl;
}