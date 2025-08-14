#include <iostream>
using namespace std;
int main()
{
startop:
    cout << "Menu" << endl;
    cout << "1.insert element" << endl;
    cout << "2.Display array" << endl;
    cout << "3.Search for element" << endl;
    cout << "4.Add new element" << endl;
    cout << "5.sort array" << endl;
    cout << "6.find minimun and maximum" << endl;
    cout << "7.exit" << endl;
    int choice;
    int size;
    int array[100];

    cin >> choice;
    if (choice == 1)
    {
        cout << "enter the number of array= " << endl;

        cin >> size;
        cout << "enter the numbers of array= " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        goto startop;
    }

    if (choice == 2)
    {
        cout << "The array is" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << endl;
        }
        goto startop;
    }

    if (choice == 3)
    {
        int tofind;
        cout << "enter the number to be found= ";
        cin >> tofind;
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == tofind)
            {
                index = i;
                cout << "index value is= " << index << endl;
                //  break;
            }
        }
        if (index == -1)
        {
            cout << "targeted value not found";
        }
        goto startop;
    }

    if (choice == 4)
    {
        cout << "enter new element= " << endl;

        cin >> array[size];
        size = size + 1;

        goto startop;
    }

    if (choice == 5)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    // swap
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << "Sorted array: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        goto startop;
    }
    if (choice == 6)
    {
        int lowest = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] < lowest)
            {
                lowest = array[i];
            }
        }
        cout << "lowest value is= " << lowest << endl;

        // finding highest
        int highest = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] > highest)
            {
                highest = array[i];
            }
        }
        cout << "highest value is= " << highest << endl;
        goto startop;
    }

    return 0;
}
