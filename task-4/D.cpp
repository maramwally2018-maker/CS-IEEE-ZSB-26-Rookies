#include <iostream>
#include <iomanip> // للتنسيق عند الطباعة
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

 
    int target = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+')
            target++;
        else
            target--;
    }

  
    int current = 0;
    int q = 0;

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '+')
            current++;
        else if (t[i] == '-')
            current--;
        else 
            q++;
    }


    int goodCases = 0;
    int totalCases = 1;
    for (int i = 0; i < q; i++) totalCases *= 2; // 2^q

    for (int mask = 0; mask < totalCases; mask++) {
        int finalPos = current;
        int tempMask = mask;

    
        for (int i = 0; i < q; i++) {
            if (tempMask % 2 == 1)
                finalPos++;
            else                  
                finalPos--;
            tempMask /= 2; 
        }

        if (finalPos == target)
            goodCases++;
    }

    double probability;
    if (totalCases > 0)
        probability = (double)goodCases / totalCases;
    else
        probability = 0.0;

   
    cout << fixed << setprecision(9) << probability << endl;

    return 0;
}