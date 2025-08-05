#include <iostream>
using namespace std;

int main() {
    int n; // Number of rows in the pyramid
     cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "   ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << "  ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << "  ";
        }

        cout << endl;
    }

    return 0;
}