#include <iostream>
using namespace std;

int main() {
    int H, A;
    cin >> H >> A;
    int attacks = (H + A - 1) / A;
    cout << attacks << endl;
    return 0;
}