#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    bool pal = true;
    int i = 0, j = x.size() - 1;
    while (i <= j) {
        if (x[i] != x[j]) {
            pal = false;
            break;
        }
        i++;
        j--;
    }
    if (pal) {
        int k = x.size() - 1;
        while (k >= 0 && x[k] == '0') {
            k--;
        }
        for (int i = k; i >= 0; i--) {
            cout << x[i];
        }
        cout << endl;
        cout << "YES" << endl;
    } else {
        int k = x.size() - 1;
        while (k >= 0 && x[k] == '0') {
            k--;
        }
        for (int i = k; i >= 0; i--) {
            cout << x[i];
        }
        cout << endl;
        cout << "NO" << endl;
    }
    return 0;
}