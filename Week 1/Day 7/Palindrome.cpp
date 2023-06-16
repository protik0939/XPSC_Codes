#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.size() - 1;
    bool p = true;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            p = false;
            break;
        }
        i++;
        j--;
    }
    if (p)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}