#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long p[20]; // n ≤ 20
    long long totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        totalSum += p[i];
    }
    
    long long minDiff = totalSum; // بداية فرق كبير
    
    // جرب جميع المجموعات الفرعية
    for (int mask = 0; mask < (1 << n); mask++) {
        long long subsetSum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subsetSum += p[i];
            }
        }
        long long diff = abs(totalSum - 2 * subsetSum);
        minDiff = min(minDiff, diff);
    }
    
    cout << minDiff << endl;
    
    return 0;
}