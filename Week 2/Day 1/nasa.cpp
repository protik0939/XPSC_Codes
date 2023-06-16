#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;

bool palCheck(long long int val)
{
    string ans = to_string(val);
    string ans2 = ans;
    reverse(ans2.begin(), ans2.end());
    return ans == ans2;
}

int main()
{
    for (long long int i = 0; i < (1LL << 15); i++)
    {
        if (palCheck(i))
        {
            v.push_back(i);
        }
    }

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        long long int freq[35000] = {0};
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        long long int ans = 0;
        for (long long int i = 0; i < n; i++)
        {
            for (long long int j = 0; j < v.size(); j++)
            {
                long long int k = a[i] ^ v[j];
                if (k > (1LL << 15))
                {
                    continue;
                }
                long long int x = freq[k];
                ans += freq[k];
            }
        }
        cout << (ans + n) / 2 << endl;
    }

    return 0;
}
