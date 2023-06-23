#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    reverse(s.begin(), s.end());

    map<string, bool> q;
    for (int i = 0; i < s.size(); i++)
    {
        string tmp = s[i];
        if (!q[tmp])
        {
            cout << tmp[tmp.size() - 2] << tmp[tmp.size() - 1];
            q[tmp] = true;
        }
    }
    cout << endl;
    }