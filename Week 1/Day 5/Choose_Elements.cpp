#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, sum = 0;
    cin >> n;
    long long int arr[n];
    cin >> k;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    for (long long int i = 0; i < k; i++)
    {
        if(arr[i]<0)
        {
            break;
        }
        sum += arr[i];
    }
        cout << sum << endl;
    return 0;
}