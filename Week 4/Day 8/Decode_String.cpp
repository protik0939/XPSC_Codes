#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> x;
        int i = 0;
        while (i < n)
        {
            if (s[i + 2] == '0' && s[i + 3] != '0')
            {
                string str = "";
                str += s[i];
                str += s[i + 1];
                x.push_back(str);
                i += 3;
            }
            else
            {
                string str = "";
                str += s[i];
                x.push_back(str);
                i++;
            }
        }

        int arr[x.size()];
        for (int i = 0; i < x.size(); i++)
        {
            stringstream ss(x[i]);
            int num;
            ss >> num;
            arr[i] = num;
        }
        for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            cout << (char)(('a' - 1) + arr[i]);
        }
        cout << endl;
    }
}