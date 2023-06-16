#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string arr[3][n];
            map<string,int>freq;
            for(int i=0; i<3; i++)
            {
                for (int j=0; j<n; j++)
                {
                cin>>arr[i][j];
                freq[arr[i][j]]++;
                }
            }

            for(int i=0; i<3; i++)
            {
                int count = 0;
                for(int j=0; j<n; j++)
                {
                    if(freq[arr[i][j]]==1)
                    {
                        count+=3;
                    }
                    else if(freq[arr[i][j]]==2)
                    {
                        count++;
                    }
                }
            cout<<count<<" ";
            }
        cout<<endl;
        }
    }


