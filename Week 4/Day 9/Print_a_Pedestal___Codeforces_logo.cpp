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
        ll a, b, c;
        a = b = c = n/3;
        if(n%3==0)
        {
            b++;
            a--;
        }
        else if(n%3==1)
        {
            b+=2;
            a--;
        }
        else if(n%3==2)
        {
            b+=2;
            c++;
            a--;
        }
        cout << c << " " << b << " " << a << endl;
    }
}