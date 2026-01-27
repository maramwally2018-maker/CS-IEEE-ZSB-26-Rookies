#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int X; 
    double Y; 
    cin >> X >> Y;

   
    if (X % 5 != 0) {
        cout << fixed << setprecision(2) << Y << endl;
        return 0;
    }

  
    double total = X + 0.50;
    if (total > Y) {
        cout << fixed << setprecision(2) << Y << endl;
    } else {
        double new_balance = Y - total;
        cout << fixed << setprecision(2) << new_balance << endl;
    }

    return 0;
}