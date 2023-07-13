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
    ll arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr, arr+4);
    ll a = arr[0];
    ll b = arr[1];
    ll c = arr[2];
    ll d = arr[3];
    ll x = d-c;
    ll y = d - b;
    ll z = d - a;
    cout<<x<<" "<<y<<" "<<z<<endl;
}