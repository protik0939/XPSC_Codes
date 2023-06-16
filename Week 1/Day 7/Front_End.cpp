#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int f = 0, l = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[f++]<<" ";
        }
        else
        {
            cout << arr[l--]<<" ";
        }
    }
}