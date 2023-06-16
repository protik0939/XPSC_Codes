#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ts;
    cin >> n >> ts;
    int arr[n];
    vector<int> tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c++;
        if (c <= ts && i < n)
        {
            tmp.push_back(arr[i]);
        }
        else
        {
            cout<< *min_element(tmp.begin(),tmp.end())<<" ";
            tmp.erase(tmp.begin(), tmp.end());
            tmp.push_back(arr[i]);
            c=1;
        }
    }
    cout<< *min_element(tmp.begin(),tmp.end())<<" ";
}