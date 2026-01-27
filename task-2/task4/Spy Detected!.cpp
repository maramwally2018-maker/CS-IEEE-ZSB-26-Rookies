#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int a[105];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check first three elements to find the common value
        if (a[0] == a[1]) {
            // Common value is a[0]
            for (int i = 2; i < n; i++) {
                if (a[i] != a[0]) {
                    cout << i + 1 << endl; // Convert to 1-based index
                    break;
                }
            }
        } else {
            // a[0] != a[1]
            if (a[0] == a[2]) {
                // a[1] is different
                cout << 2 << endl;
            } else {
                // a[0] is different
                cout << 1 << endl;
            }
        }
    }
    
    return 0;
}