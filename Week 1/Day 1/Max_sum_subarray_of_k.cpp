#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        long long int i = 0, j = 0, sum = 0, MX, res;
        while (j < N)
        {
            sum += Arr[j];
            if (j < K - 1)
            {
                j++;
            }
            else
            {
                MX = max(MX , sum);
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        return MX;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}