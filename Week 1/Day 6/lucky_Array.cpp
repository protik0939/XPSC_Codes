#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int min = *min_element(arr, arr + n);
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==min)
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            cout<<"Lucky"<<endl;
        }
        else
        {
            cout<<"Unlucky"<<endl;
        }
    }