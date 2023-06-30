#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            char arr[n];
            for(int i=0; i<n; i++)
            {
                arr[i] = s[i];
            }
            sort(arr, arr+n);
            cout<<(int)(arr[n-1] - ('a' - 1))<<endl;
        }
    }