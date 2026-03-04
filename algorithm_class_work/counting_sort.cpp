#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 5, 2, 4, 1, 2, 8, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int arr2[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= max; i++)
    {
        arr2[i] = arr2[i] + arr2[i - 1];
    }
    for (int i = 0; i <= max; i++)
    {
        cout << arr2[i] << " ";
    }

    int arr3[n];
    for (int i = n - 1; i >= 0; i--)
    {
        arr3[arr2[arr[i]] - 1] = arr[i];
        arr2[arr[i]]--;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
}