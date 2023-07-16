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
     cin>>n;
     while (n--)
     {
        ll x;
        cin>>x;
        if (x%7==0 && x%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else if (x%9==0 && x%2==1)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
     }
 }