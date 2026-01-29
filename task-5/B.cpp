#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        long long a = -1, b = -1, c = -1;
        
    
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                break;
            }
        }
        
        if (a == -1) {  
            cout << "NO" << endl;
            continue;
        }
        
        long long remaining = n / a;
        
        for (long long i = a + 1; i * i <= remaining; i++) {
            if (remaining % i == 0 && i != a) {
                b = i;
                break;
            }
        }
        
        if (b == -1) {  
            cout << "NO" << endl;
            continue;
        }
        
        c = remaining / b;
        
   
        if (c != a && c != b && c >= 2) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}