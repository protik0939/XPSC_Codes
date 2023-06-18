#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        map<string, ll> pr;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string ck = s;
            for (char i = 'a'; i <= 'k'; i++)
            {
                if (i != s[0])
                {
                    ck[0] = i;
                    cnt += pr[ck];
                }
            }
            ck = s;
            for (char i = 'a'; i <= 'k'; i++)
            {
                if (i != s[1])
                {
                    ck[1] = i;
                    cnt += pr[ck];
                }
            }
            pr[s]++;
        }
        cout << cnt << endl;
    }
}