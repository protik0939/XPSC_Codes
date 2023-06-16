#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string del("EGYPT");
    cin >> s;

    size_t pos = s.find(del);
    while (pos != string::npos) {
        s.replace(pos, del.length(), " ");
        pos = s.find(del, pos + 1);
    }

    cout << s << endl;

    return 0;
}
