#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ans = 0;
        set<char> tk;
        for (ll i = 0; i < s.size(); i++)
        {
            if (tk.count(s[i]) == 0 && tk.size() == 3)
            {
                ans++;
                tk.clear();
            }
            tk.insert(s[i]);
        }
        if (!tk.empty())
        {
            ans++;
        }
        cout << ans << endl;
    }
}