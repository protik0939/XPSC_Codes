#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int baki = s - r;
        cout << baki << " ";
        vector<int> ans(n, 0);
        int i = 0;
        while (r != 0)
        {
            ans[i]++;
            r--;
            i++;
            i %= (n - 1);
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
