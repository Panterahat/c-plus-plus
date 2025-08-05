#include <iostream>
#include <cmath>
using namespace std;
int binary_to_decimal(int n)
{
    int decimal = 0, i = 0, remainder,cross;
    for (; n > 0;)
    {
        remainder = n % 10;
        n = n / 10;
        cross = pow(2, i );
        decimal = decimal + remainder * cross; 
        i++;
    }
    return decimal;
}
int main()
{
    cout << "Binary to decimal is: " << binary_to_decimal(101010) << endl;
    return 0;
}
