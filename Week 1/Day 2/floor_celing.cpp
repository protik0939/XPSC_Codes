#include <bits/stdc++.h>
using namespace std;
int main()
{
    float X;
    cin>>X;
    float temp =  floor(X);
    if(X-temp >= .5)
    {
        cout<<ceil(X)<<endl;
    }
    else
    {
        cout<<floor(X)<<endl;
    }
}