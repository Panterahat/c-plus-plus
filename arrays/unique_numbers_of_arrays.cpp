#include <iostream>
using namespace std;

int main()
{// input section
    int n;
    cout << "Enter the total number: ";
    cin >> n;

    int array[n];
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Matching section
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (i != j && array[i] == array[j])
            {
                break; 
            }
        }
        if (j == n)
        {
            cout << array[i] << " is a unique number" << endl;
        }
    }

    return 0;
}
