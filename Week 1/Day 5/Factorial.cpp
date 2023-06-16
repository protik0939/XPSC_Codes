#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long int t,x;
        cin>>t;
        for(long long int i=0; i<t; i++)
        {
            cin>>x;
            if(x==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
            long long int tmp = 1;
            for(int j=1; j<=x; j++)
            {
                tmp*=j;
            }
            cout<<tmp<<endl;
            }
        }

    }