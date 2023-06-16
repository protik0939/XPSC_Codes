#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string S;
        cin>>S;
        long long int arr[26]= {0};
        for(long long int i=0; i<S.size(); i++)
        {
            arr[S[i]-'a']++;
        }
        bool ch = true;
        for(long long int i=0; i<26; i++)
        {
            if(arr[i]==0)
            {
                cout<<(char)('a'+i)<<endl;
                ch = false;
                break;
            }
        }
        if(ch)
        {
            cout<<"None"<<endl;
        }
    }
