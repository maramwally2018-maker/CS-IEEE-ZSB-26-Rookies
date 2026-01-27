#include <iostream>
using namespace std;

long long f(int N) {
    if (N == 0) return 1;               // Base case
    return N * f(N - 1);                // Recursive case
}

int main() {
    int N;
    cin >> N;
    cout << f(N) << endl;
    return 0;
}