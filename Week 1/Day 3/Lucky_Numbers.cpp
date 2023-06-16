#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> nums;
    for (int i = a; i <= b; i++)
    {
        bool q = false;
        int tmp = i;
        while (tmp != 0)
        {
            if (tmp % 10 == 4 || tmp % 10 == 7)
            {
                q = true;
            }
            else
            {
                q = false;
                break;
            }
            tmp /= 10;
        }
        if (q)
        {
            nums.push_back(i);
        }
    }
    if (nums.size() == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
            if (i != nums.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}