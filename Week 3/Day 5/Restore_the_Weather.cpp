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
        pair<int, int> arr[n];
        int brr[n], ans[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
        {
            ans[arr[i].second] = brr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
}