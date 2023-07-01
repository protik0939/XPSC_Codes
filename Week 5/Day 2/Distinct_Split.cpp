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
        string s;
        cin >> s;

        set<ll> s1, s2;
        vector<ll> arr(26, 0);
        for (int i = 0; i < n; ++i)
        {
            s2.insert(s[i]);
            arr[s[i] - 'a']++;
        }
        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            s1.insert(s[i]);
            arr[s[i] - 'a']--;
            ll tmp = 0, l = s1.size();

            for (int i = 0; i < 26; ++i)
            {
                if (arr[i])
                {
                    tmp++;
                }
            }
            ans = max(ans, (tmp + l));
        }

        cout << ans <<endl;
    }
}
