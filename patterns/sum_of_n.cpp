#include<iostream>
using namespace std;

int main() {
    int n = 1, sum = 0;  // initialize n to a non-zero value

    cout << "Enter numbers (0 to stop): ";
    
    while (n != 0) {
        cin >> n;
        sum += n;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
