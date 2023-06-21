#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string res = "";
        res += s[0];
        for (int i = 0; s[i]; ++i)
        {
            if (res.back() != s[i])
            {
                res += s[i];
            }
        }
        
        if (res == "meow")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}