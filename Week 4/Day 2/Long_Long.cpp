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
        ll way = 0, sum = 0;
        ll arr[n];
        bool previous = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] < 0 && previous == true)
            {
                way++;
                previous = false;
            }
            if (arr[i] > 0)
            {
                previous = true;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            sum += abs(arr[i]);
        }
        cout << sum << " " << way << endl;
    }
}
