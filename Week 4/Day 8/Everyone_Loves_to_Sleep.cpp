#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int cnvrt = h * 60 + m;
        int res = 100005;
        while (n--)
        {
            int Ah, Am;
            cin >> Ah >> Am;
            int tmp = Ah * 60 + Am - cnvrt;
            if (tmp < 0)
            {
                tmp += 1440;
            }
            res = min(res, tmp);
        }
        int rH = res / 60;
        int rM = res % 60;
        cout << rH << " " << rM << endl;
    }
}