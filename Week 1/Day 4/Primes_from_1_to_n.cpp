#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int a;
        cin>>a;
        for(int i=2; i<=a; i++)
        {
        bool ch = true;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    ch = false;
                }
            }
            if(ch)
            {
                cout<<i<<" ";
            }
        }
        return 0;
    }