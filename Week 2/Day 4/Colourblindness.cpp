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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        bool ck = true;
        for (int i = 0; i < n; i++)
        {
            if(s1[i]=='B' || s1[i]=='G')
            {
                s1[i] = 'D';
            }
            
            if(s2[i]=='B' || s2[i]=='G')
            {
                s2[i] = 'D';
            }
            
            if (s1[i] != s2[i])
            {
                    ck = false;
                    break;
            }
        }
        if (ck)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}