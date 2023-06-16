#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            arr.erase(arr.begin() + i);
            n--;
            i--;
        }
    }
    if (arr.size() == 0)
    {
        cout << "" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}