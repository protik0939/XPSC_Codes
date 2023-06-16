#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        for(int i=0; i<t; i++)
        {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        vector<int>res;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int temp = arr[i]+arr[j]+j-i;
                res.push_back(temp);
            }
        }
        cout<<*min_element(res.begin(), res.end())<<endl;
        }
    }