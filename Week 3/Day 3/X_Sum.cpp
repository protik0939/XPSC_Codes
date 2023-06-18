#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0, res = 0;
        int r, c;
        cin >> r >> c;
        int daba[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> daba[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int lu = 0, ld = 0, ru = 0, rd = 0;

                int x = i-1, y = j-1;
                while (x >= 0 && y >= 0)
                {
                    lu += daba[x][y];
                    x--;
                    y--;
                }

                x = i-1, y = j+1;
                while (x >= 0 && y < c)
                {
                    ru += daba[x][y];
                    x--;
                    y++;
                }

                x = i+1, y = j-1;
                while (x < r && y >= 0)
                {
                    ld += daba[x][y];
                    x++;
                    y--;
                }

                x = i+1, y = j+1;
                while (x < r && y < c)
                {
                    rd += daba[x][y];
                    x++;
                    y++;
                }

                ans = daba[i][j] + lu + ld + ru + rd;
                res = max(ans, res);
            }
        }
        cout << res << endl;
    }

    return 0;
}
