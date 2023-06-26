#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        map<int, char> m;
        bool tmp = false;
        for (int i = 0; i < n; i++)
        {
            if (m.find(arr[i]) != m.end() && str[i] != m[arr[i]])
            {
                tmp = true;
                break;
            }
            m.insert({arr[i], str[i]});
        }

        if (!tmp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}