#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string result = "";
    for (size_t i = 0; i < a.size(); i++) {
        // XOR: same bits -> 0, different bits -> 1
        result += (a[i] == b[i]) ? '0' : '1';
    }

    cout << result << endl;
    return 0;
}


//there is something new here,check it out