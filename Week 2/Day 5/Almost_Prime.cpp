#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0;
    cin>>n;
    bool b[n+1] = {false};
    int arr[n+1] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                arr[j] += 1;
            }
        }

        if (arr[i] == 2)
        {
            res += 1;
        }
    }
    cout<<res<<endl;
    return 0;
}