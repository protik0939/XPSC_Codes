#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    typedef long long int ll;
    ll i=0, j=0, sz = 0, ans = 0, n=a.size();
    while(j<n)
    {
        sz+=a[j];
        
        if(sz>k)
        {
            while(sz>k)
            {
                sz-=a[i];
                i++;
            }
        }
        
        if(sz==k)
        {
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;
}


int main()
    {
        long long int n,k;
        cin>>n>>k;
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        long long int ans = (a,k);
        cout<<ans<<endl;
    }