#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        
        
        int freq[26] = {0};
        
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            freq[t[i] - 'a']--;
        }
        
        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}