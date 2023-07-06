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
        int p;
        cin >> p;
        int tmp = 0;
        string s_copy = s;
        sort(s_copy.rbegin(), s_copy.rend());
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            tmp += s[i] - 'a' + 1;
        }
        for (int i = 0; i < s_copy.size(); i++)
        {
            if (tmp > p)
            {
                mp[s_copy[i]]++;
                tmp -= s_copy[i] - 'a' + 1;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] > 0)
            {
                mp[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
}