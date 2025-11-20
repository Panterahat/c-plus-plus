#include <iostream>
using namespace std;
int main()
{
    int size, a, z;
    cout << "first enter the array size =";
    cin >> size;
    int arr[size + 1];
    cout << "\nnow enter array elements =";
    for (int i = 1; i < size + 1; i++)
    {
        cin >> arr[i];
    }
    cout << "\narray is = ";
    for (int i = 1; i < size + 1; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << "\nwhich element to be moved =";
    cin >> a;

    int temp = arr[a];
    for (int i = a; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 1; i < size + 1; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << "where to move =";
    cin >> z;
    for (int i = size; i > z; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[z] = temp;

    for (int i = 1; i < size + 1; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    return 0;
}