#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int sz = 0, res = 0, i = 0;
        unordered_map<int, int> frq;
        while (i < N)
        {
            sz += A[i];
            if (sz == K)
            {
                res = max(res, i + 1);
            }
            if (frq.find(sz - K) != frq.end())
            {
                int idx = frq[sz - K];
                res = max(res, i - idx);
            }
            if (frq.find(sz) == frq.end())
            {
                frq[sz] = i;
            }
            i++;
        }
        return res;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
}