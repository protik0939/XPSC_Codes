#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;

int main()
{
    somoy;
    ll n;
    cin >> n;
    ll odd = 0, evn = 0, sm = 0, cnt = 0, arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm += arr[i];
        if (i % 2 == 1)
        {
            odd += arr[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evn = sm - odd - arr[i];
        }
        else
        {
            odd = sm - evn - arr[i];
        }
        if (evn == odd)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}