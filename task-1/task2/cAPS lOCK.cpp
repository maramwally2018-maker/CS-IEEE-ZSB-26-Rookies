#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    bool change = true;
    
    // Check if all letters from position 1 to end are uppercase
    for (int i = 1; i < n; i++) {
        if (islower(s[i])) {
            change = false;
            break;
        }
    }
    
    if (change) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
    
    cout << s << endl;
    
    return 0;
}