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
        int frq[26] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (frq[s[i] - 'A'] == 0)
            {
                count += 2;
                frq[s[i] - 'A']++;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
}