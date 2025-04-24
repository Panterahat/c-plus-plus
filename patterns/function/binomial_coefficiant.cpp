#include <iostream>
using namespace std;
int factorial(int n)
{ int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int binomial_coefficient(int n, int k)
{
    int result = factorial(n) / (factorial(k) * factorial(n - k));
    return result;
}
int main()
{
    cout << "Binomial Coefficient of 5 and 2 is: " << binomial_coefficient(6,3) << endl;

    return 0;
}