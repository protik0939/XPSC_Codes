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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0;
        int temp = arr[0];
        int trk = 1;
        for (int i = 1; i < n; i++)
        {
            count += (arr[i] - temp);
            if (arr[i] == temp)
            {
                trk++;
            }
        }
        if (trk == n)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}