#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> e_arr;
    vector<ll> o_arr;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            e_arr.push_back(arr[i]);
        }
        else
        {
            o_arr.push_back(arr[i]);
        }
    }
    ll result = 0;
    for (ll i = 0; i < e_arr.size(); i++)
    {
        result += e_arr[i];
    }
    ll oc = o_arr.size();
    sort(o_arr.begin(), o_arr.end());
    reverse(o_arr.begin(), o_arr.end());
    if (oc % 2 != 0)
    {
        oc--;
    }
    for (ll i = 0; i <oc; i++)
    {
        result += o_arr[i];
    }
    cout << result << endl;
}