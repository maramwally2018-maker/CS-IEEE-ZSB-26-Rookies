#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        int count = 0;
        int root = sqrt(x);  
        
      
        for (int d = 1; d <= root; d++) {
            if (x % d == 0) {
                count++; 
                if (d != x / d) {
                    count++; 
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}