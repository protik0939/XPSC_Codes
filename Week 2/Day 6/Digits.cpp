#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll res = ( log10(n)/log10(k)) + 1;
    cout<<res<<endl;
}