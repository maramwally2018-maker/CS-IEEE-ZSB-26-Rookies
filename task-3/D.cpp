#include <iostream>
using namespace std;

int main() {
    long long N;
    int K;
    cin >> N >> K;

    int count = 0;
    do {
        N /= K;
        count++;
    } while (N > 0);

    cout << count << endl;
    return 0;
}