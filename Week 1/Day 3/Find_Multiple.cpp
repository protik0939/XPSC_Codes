#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int a , b , c;
        cin>>a>>b>>c;
        bool x = true;
        while (a!=b+1)
        {
            if(a%c==0)
            {
            cout<<a<<endl;
            x = false;
            break;
            }
            a++;
        }
        if(x)
        {
            cout<<"-1"<<endl;
        }
        return 0;
    }