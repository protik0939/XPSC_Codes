#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int i = 0;
        vector<int> a;
        while (i < n)
        {
            a.push_back(v[i]);
            if (v[i] == v[i + 1])
            {
                while (i < n && v[i] == v[i + 1])
                    i++;
            }
            i++;
        }
        string s = "";
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i - 1] > a[i])
                s += 'd';
            else if (a[i - 1] < a[i])
                s += 'u';
        }
        for (int i = 0; i + 1 < s.size(); i++)
        {
            if (s.substr(i, 2) == "ud")
            {
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
    }
}
