#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        cin >> n;
        
        vector<long long> v;
        map<long long, long long> m;
        
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            m[x]++;
            if (m[x] == 1)
                v.push_back(x);
        }
        
        sort(v.begin(), v.end());
        
        long long cnt = m[v[0]], r = 0;
        
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] == 1)
            {
                if (m[v[i + 1]] > m[v[i]])
                    cnt += (m[v[i + 1]] - m[v[i]]);
            }
            else
            {
                cnt += m[v[i + 1]];
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
