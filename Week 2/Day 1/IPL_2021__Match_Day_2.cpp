
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> mx;
        multiset<int> s_arr;
        for (int i = 0; i < k; i++) {
            s_arr.insert(arr[i]);
        }
        mx.push_back(*s_arr.rbegin());

        for (int i = k; i < n; i++) {
            s_arr.erase(s_arr.find(arr[i - k]));
            s_arr.insert(arr[i]);
            mx.push_back(*s_arr.rbegin());
        }

        return mx;
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}