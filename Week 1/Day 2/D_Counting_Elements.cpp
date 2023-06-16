#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool temp = false;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            if ((arr[i] + 1) == arr[j])
            {
                temp = true;
            }
        }
        if (temp)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}