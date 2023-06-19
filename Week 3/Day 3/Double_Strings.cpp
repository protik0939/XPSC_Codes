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
        vector<string> s;
        map<string, int> ck;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            s.push_back(temp);
            ck[s[i]] = 1;
        }
        string res = "";
        for (int i = 0; i < n; i++)
        {
            bool x = false;
            for (int j = 1; j <= s[i].size(); j++)
            {
                string sub_str_1 = s[i].substr(0, j);
                string sub_str_2 = s[i].substr(j, s[i].size() - 1);
                if (ck[sub_str_1] && ck[sub_str_2])
                {
                    x = true;
                    break;
                }
            }
            if (x)
            {
                res += '1';
            }
            else
            {
                res += '0';
            }
        }
        cout << res << endl;
    }
}