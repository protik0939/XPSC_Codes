#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        set<string>x;
        for (int i = 0; i < n - 1; i++)
        {
            string q = "";
            q += s[i];
            q += s[i+1];
            x.insert(q);
        }
        cout << x.size() << endl;
    }
}