#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int row_one = 0, col_one = 0;
    
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row_one = i + 1; 
                col_one = j + 1; 
            }
        }
    }
    
    // حساب أقل عدد خطوات
    int moves = abs(row_one - 3) + abs(col_one - 3);
    cout << moves << endl;
    
    return 0;
}