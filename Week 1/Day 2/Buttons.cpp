#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    int ans_1 = a+(a-1);
    int ans_2 = b+(b-1);
    int ans_3 = a+b;
    cout<<max(ans_1, max(ans_2, ans_3))<<endl;
}