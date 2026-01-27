
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> y(2*n + 1);
    for (int i = 0; i < 2*n + 1; i++) {
        cin >> y[i];
    }

    for (int i = 1; i < 2*n && k > 0; i += 2) {
        if (y[i] - 1 > y[i-1] && y[i] - 1 > y[i+1]) {
            y[i]--;
            k--;
        }
    }

    for (int i = 0; i < 2*n + 1; i++) {
        cout << y[i] << " ";
    }
}