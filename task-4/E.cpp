#include <iostream>
#include <string>
using namespace std;

string s;
int n;
bool used[8];      
string ans[40320];  
int ansCount = 0;
char current[9];    
int currentIndex = 0;

void swapChars(char &a, char &b) {
    char t = a;
    a = b;
    b = t;
}

void sortString() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                swapChars(s[j], s[j + 1]);
            }
        }
    }
}

void backtrack() {
    if (currentIndex == n) {
      
        current[n] = '\0'; 
        ans[ansCount] = string(current);
        ansCount++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

      
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) {
            continue;
        }

        used[i] = true;
        current[currentIndex] = s[i];
        currentIndex++;

        backtrack();

        currentIndex--;
        used[i] = false;
    }
}

int main() {
    cin >> s;
    n = s.length();


    sortString();

    
    for (int i = 0; i < n; i++) {
        used[i] = false;
    }

    backtrack();


    cout << ansCount << endl;
    for (int i = 0; i < ansCount; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}