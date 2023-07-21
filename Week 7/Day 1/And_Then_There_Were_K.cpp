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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
            ll cnt = -1;
            while(n>0)
            {
                n/=2;
                cnt++;
            }
            cout<<((1<<cnt) -1)<<endl;
    }
}