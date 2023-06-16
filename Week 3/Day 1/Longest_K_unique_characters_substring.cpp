#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int i = 0, j = 0, n = s.size(), frq[26] = {0}, U = 0, res = -1;

        while (j < n)
        {
            char tmp = s[j];
            if (frq[tmp - 'a'] == 0)
            {
                U++;
            }
            frq[tmp - 'a']++;
            if (U > k)
            {
                while (U > k)
                {
                    char l_char = s[i];
                    frq[l_char - 'a']--;
                    if (frq[l_char - 'a'] == 0)
                    {
                        U--;
                    }
                    i++;
                }
            }
            if (U == k)
            {
                res = max(res, j - i + 1);
            }
            j++;
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}