
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}


vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    long long int i = 0, j = 0;
    vector<long long int> ans;
    queue<long long int> neg_val;

    while (j < N)
    {
        if (A[j] < 0)
        {
            neg_val.push(A[j]);
        }
        if (j < K - 1)
        {
            j++;
        }
        else
        {
            if (!neg_val.empty())
            {
                ans.push_back(neg_val.front());
            }
            else
            {
                ans.push_back(0);
            }
            if (A[i] < 0)
            {
                neg_val.pop();
            }
            i++;
            j++;
        }
    }
    return ans;
}