#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int r,c;
            char arr[8][8];
            for(int i=1; i<=8; i++)
            {
                for(int j=1; j<=8; j++)
                {
                    cin>>arr[i][j];
                }
            }
            
            for(int i=1; i<=8; i++)
            {
                for(int j=0; j<=8; j++)
                {
                    if(arr[i][j]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#')
                    {
                        r=i; c=j;
                    }
                }
            }
            cout<<r<<" "<<c<<endl;
        }

    }
