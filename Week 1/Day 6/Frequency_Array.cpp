#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int n , m;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int arr2[m+1]={0};
        for(int i=0; i<n; i++)
        {
            arr2[arr[i]]++;
        }
        for(int i=1; i<=m; i++)
        {
            cout<<arr2[i]<<endl;
        }
    }