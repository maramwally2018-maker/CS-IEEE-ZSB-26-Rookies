#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long X;
    cin >> X;
    
    long long a = 1, b = X;
    
    
    for (long long i = sqrt(X); i >= 1; i--) {
        if (X % i == 0) {
            long long j = X / i;
         
            long long x = i, y = j;
            while (y != 0) {
                long long temp = y;
                y = x % y;
                x = temp;
            }
            long long g = x;
            
            if ((i / g) * j == X) {  
                a = i;
                b = j;
                break;
            }
        }
    }
    
    cout << a << " " << b << endl;
    return 0;
}