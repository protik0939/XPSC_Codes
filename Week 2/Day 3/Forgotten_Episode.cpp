#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
        ll n;
        cin>>n;
        vector<ll>arr;
        for(ll i=0; i<n-1; i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        for(ll i=1; i<=n; i++)
        {
            if(i!=arr[i-1])
            {
                cout<<i<<endl;
                break;
            }
        }
    }