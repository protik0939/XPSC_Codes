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
        int n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((n - k) % 2 == 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n - k + 1 << endl;
            }
            else
            {
                if (n < 2 * k)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    if ((n - 2 * k) % 2 == 1)
                    {
                        cout << "NO" << endl;
                    }
                    else
                    {
                        cout << "YES" << endl;
                        for (int i = 0; i < k - 1; i++)
                        {
                            cout << 2 << " ";
                        }
                        cout << n - 2 * k + 2 << endl;
                    }
                }
            }
        }
    }
}