#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        priority_queue<int> m;
        ll res = 0;
        while (n--)
        {
            ll tmp;
            cin >> tmp;
            if (tmp == 0)
            {
                if (!m.empty())
                {
                    res += m.top();
                    m.pop();
                }
            }
            else
            {
                m.push(tmp);
            }
        }
        cout << res << endl;
    }
    return 0;
}