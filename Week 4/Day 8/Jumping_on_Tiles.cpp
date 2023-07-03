#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ct, m;
        string a;
        cin >> a;
        vector<ll> arr[26];
        vector<ll> ans;
        m = 0;

        for (int i = 0; i < a.size(); i++)
        {
            arr[a[i] - 97].push_back(i + 1);
        }

        ct = abs(a[0] - a[a.size() - 1]);
        if (a[a.size() - 1] > a[0])
        {
            for (int i = a[0] - 97; i <= a[a.size() - 1] - 97; i++)
            {
                m = m + arr[i].size();

                for (int j = 0; j < arr[i].size(); j++)
                {
                    ans.push_back(arr[i][j]);
                }
            }
        }
        else
        {
            for (int i = a[0] - 97; i >= a[a.size() - 1] - 97; i--)
            {
                m = m + arr[i].size();

                for (int j = 0; j < arr[i].size(); j++)
                {
                    ans.push_back(arr[i][j]);
                }
            }
        }

        cout << ct << " " << m << endl;

        for (int i = 0; i < m; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}