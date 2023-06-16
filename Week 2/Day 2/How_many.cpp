#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum, mul;
    cin >> sum >> mul;

    int count = 0;
    for (int i = 0; i <= sum; i++) {
        for (int j = 0; j <= sum; j++) {
            for (int k = 0; k <= sum; k++) {
                if (i + j + k <= sum && i * j * k <= mul) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
