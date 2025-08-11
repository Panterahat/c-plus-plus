#include <iostream>
using namespace std;
int main()
{
    // input section
    int n;
    cout << "enter the total number= ";
    cin >> n;
    int arr[n];
    cout << "enter the numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is= " << sum << endl;
    // product
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    cout << "product is= " << product << endl;
}