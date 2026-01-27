#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    bool letters[26] = {false};
    
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            letters[tolower(s[i]) - 'a'] = true;
        }
    }
    
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            break;
        }
    }
    
    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}