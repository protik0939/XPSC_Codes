#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x;
    cin >> x;
    bool chk = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==x)
            {
                chk = false;
            }
        }
    }
    if(chk)
    {
        cout<<"will take number"<<endl;
    }
    else
    {
        cout<<"will not take number"<<endl;
    }
}