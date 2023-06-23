#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        reverse(arr, arr + n);
        priority_queue<ll> pq;
        for (ll i = 0; i < n; i++)
        {
            if (pq.empty())
            {
                pq.push(arr[i]);
            }
            else
            {
                ll x = pq.top();
                if (x >= arr[i])
                {
                    pq.pop();
                    pq.push(x ^ arr[i]);
                }
                else
                {
                    pq.push(arr[i]);
                }
            }
        }
        cout << pq.size() << endl;
    }
    return 0;
}
