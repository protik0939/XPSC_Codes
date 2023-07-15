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
        string s;
        cin >> s;
        ll turn[2] = {1, 2}; // 1 = Alice, 2 = Bob
        ll pnt[2] = {0, 0};
        ll q = s.size();
        for (ll i = 0; i < q; i++)
        {
            if (s[i] == 'A' && turn[0] == 1)
            {
                pnt[0]++;
            }
            else if (s[i] == 'B' && turn[0] == 1)
            {
                swap(turn[0], turn[1]);
            }
            else if (s[i] == 'B' && turn[0] == 2)
            {
                pnt[1]++;
            }
            else if (s[i] == 'A' && turn[0] == 2)
            {
                swap(turn[0], turn[1]);
            }
        }
        cout << pnt[0] << " " << pnt[1] << endl;
    }
}