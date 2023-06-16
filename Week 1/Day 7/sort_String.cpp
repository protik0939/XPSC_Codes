#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i]!=0)
        {
            while(freq[i]!=0)
            {
                cout<<(char)('a'+i);
                freq[i]--;
            }
        }
    }
}