#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int a, b, cnt = 0;
        float t;
        cin>>a>>b;
        cin>>t;
        int tmp = a;
        for(float i=a; i<=t+.5; i=a)
        {
            cnt += b;
            a+=tmp;
        }
    cout<<cnt<<endl;
    return 0;
    }