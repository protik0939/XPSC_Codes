#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], mx = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int ans=0, trk = 0;
    for (int i = 2; i <= mx; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (arr[j] % i == 0)
            {
                cnt++;
            }
        }
        if (cnt > trk)
        {
            trk = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
}
