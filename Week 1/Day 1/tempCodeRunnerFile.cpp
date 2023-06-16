class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> max_runs;
        multiset<int> sub_arr;
        for (int i = 0; i < k; i++) {
            sub_arr.insert(arr[i]);
        }
        max_runs.push_back(*sub_arr.rbegin());

        for (int i = k; i < n; i++) {
            sub_arr.erase(sub_arr.find(arr[i - k]));
            sub_arr.insert(arr[i]);
            max_runs.push_back(*sub_arr.rbegin());
        }

        return max_runs;
    }
};