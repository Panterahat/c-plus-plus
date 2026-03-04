#include <iostream>
using namespace std;
void selection_sort(int arr[])
{
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int minind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minind])
            {
                minind = j;
            }
        }
        swap(arr[i], arr[minind]);
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
}