#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = s[0] - 'a';
        int b = s[1] - 'a';
        int indx = (26 * a) + b;
        indx -= (indx/27);
        cout << indx << endl;
    }
}