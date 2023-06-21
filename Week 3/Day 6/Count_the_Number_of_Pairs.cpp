#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[26] = {0}, brr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a')
            {
                arr[s[i] - 'a']++;  
            }
            else
            {
                brr[s[i] - 'A']++;
            }
        }
        int res = 0;
        for (int i = 0; i < 26; i++)
        {
            int m = min(arr[i], brr[i]);
            res += m;
            int ms = abs(arr[i] - brr[i]);
            if (ms >= 2)
            {
                res += min(k, ms / 2);
                k -= min(k, ms / 2);
            }
        }
        cout << res << endl;
    }
}