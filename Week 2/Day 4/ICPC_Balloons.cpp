#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int freq[26] = {0};
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(freq[s[i]-'A']==0)
            {
                freq[s[i]-'A']++;
                cnt+=2;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}