#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> frq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }
        bool ck = true;
        for (int i = 0; i < n; i++)
        {
            if (frq[arr[i]] >= 3)
            {
                cout << arr[i] << endl;
                ck = false;
                break;
            }
        }
        if(ck)
        {
            cout<<"-1"<<endl;
        }
    }
}