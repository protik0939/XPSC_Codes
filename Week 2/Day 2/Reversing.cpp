#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        cin>>n;
        int arr[n];
        vector<int>vc;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                reverse(vc.begin(),vc.end());
                vc.push_back(arr[i]);
            }
            else
            {
                vc.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<vc[i]<<" ";
        }
    }