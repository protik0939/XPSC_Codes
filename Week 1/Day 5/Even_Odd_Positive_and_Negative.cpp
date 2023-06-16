#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, evn = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evn++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout<<"Even: "<<evn<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}