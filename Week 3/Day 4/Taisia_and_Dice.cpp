#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int temp = s - r;
        int baki = r;
        vector<int> res;
        res.push_back(temp);
        while (baki != 0)
        {
            if (baki - temp < 0)
            {
                temp = (temp - baki);
            }
            res.push_back(temp);
            baki = baki - temp;
        }
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i];
        }
    }
}