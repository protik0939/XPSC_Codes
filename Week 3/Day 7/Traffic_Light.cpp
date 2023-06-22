#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char x;
        cin >> x;
        string s;
        cin >> s;
        int res = -1;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                arr.push_back(i);
            }
        }
        arr.push_back(arr[0] + n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == x)
            {
                int dt = *lower_bound(arr.begin(), arr.end(), i);
                res = max(res, dt - i);
            }
        }
        cout << res << endl;
    }
}