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
        
        vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = 0;
            }
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int x;
                cin >> x;
                arr[j][x]++;
            }
        }
        
        int Val, Val2;
        
        for (int i = 1; i <= n; i++)
        {
            if (arr[1][i] != 0)
            {
                if (arr[1][i] == n - 1)
                    Val = i;
                else
                    Val2 = i;
            }
        }
        
        cout << Val << " ";
        
        for (int i = 2; i <= n; i++)
        {
            cout << Val2 << " ";
            
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][j] != 0 && j != Val2)
                {
                    Val2 = j;
                    break;
                }
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}
