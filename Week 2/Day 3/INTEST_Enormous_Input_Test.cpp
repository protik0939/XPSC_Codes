#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%k==0)
            {
                count++;
            }
        }
        cout<<count<<endl;

    }