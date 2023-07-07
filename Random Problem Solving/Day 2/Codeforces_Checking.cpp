#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            string s = "codeforces";
            map<char, int>x;
            for(int i=0; i<s.size(); i++)
            {
                x[s[i]]++;
            }
            char p;
            cin>>p;
            if(x[p]>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }