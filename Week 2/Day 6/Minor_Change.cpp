#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int n = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            n++;
        }
    }
    cout << n << endl;
}