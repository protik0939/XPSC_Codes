#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        string pi = "314159265358979323846264338327";
        string s;
        cin >> s;
        for (int i = 0; i < 30; i++)
        {
            if (pi[i] != s[i])
            {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}