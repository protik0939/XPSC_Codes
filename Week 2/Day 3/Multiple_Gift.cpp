#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
        ll x, y;
        cin>>x>>y;
        ll i=x;
        ll count = 0;
        while(i<y+1)
        {
            count++;
            i*=2;
        }
        cout<<count<<endl;
    }