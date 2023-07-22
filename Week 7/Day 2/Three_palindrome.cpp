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
    cin >> n;
    string s = "aabb";
    string res = "";
    ll j = 0;
    for (int i = 0; i < n; i++)
    {
        res += s[j];
        j++;
        if (j == 4)
        {
            j = 0;
        }
    }
    cout << res << endl;
}