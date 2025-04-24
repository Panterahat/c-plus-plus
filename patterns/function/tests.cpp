#include <iostream>
using namespace std;
int min_of2(int a, int b)
{
    int min;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    return min;
}
int main()
{
    // int value=printhello();
    cout << min_of2(5,-6) << endl;
    return 0;
}