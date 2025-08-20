#include <iostream>
using namespace std;
int main()
{ // initialize array
    int choice;
    int size = 0;
    int array[100];
startop:

    // menu declaration
    cout << "Menu" << endl;
    cout << "1.insert element" << endl;
    cout << "2.Display array" << endl;
    cout << "3.Search for element" << endl;
    cout << "4.Add new element" << endl;
    cout << "5.sort array" << endl;
    cout << "6.find minimun and maximum" << endl;
    cout << "7.Delete element" << endl;
    cout << "8.exit" << endl;

    // user choice input
    cin >> choice;

    // insert element
    if (choice == 1)
    {
    input:

        cout << "enter the size of array= " << endl;

        cin >> size;

        if (size >= 100)
        {
            printf("Array size must be < 100.\n");
            goto input;
        }
        cout << "enter the numbers of array= " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        goto startop;
    }

    // display array
    if (choice == 2)
    {
        if (size == 0)
        {
            printf("Array is empty.\n");
            goto startop;
        }

        cout << "The array is" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << endl;
        }
        goto startop;
    }

    // Search for element
    if (choice == 3)
    {
        if (size == 0)
        {
            printf("Array is empty.\n");
            goto startop;
        }
        int tofind;
        cout << "enter the number to be found= ";
        cin >> tofind;
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == tofind)
            {
                index = i;
                cout << "Element found at index = " << index << endl;
                //  break;
            }
        }
        if (index == -1)
        {
            cout << "targeted value not found";
        }
        goto startop;
    }

    // Add new element
    if (choice == 4)
    {
        if (size >= 100)
        {
            cout << "Array is already full.\n";
            goto startop;
        }

        cout << "enter new element= " << endl;

        cin >> array[size];
        size = size + 1;

        goto startop;
    }

    // sort array
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

    // find minimun and maximum
    if (choice == 6)
    {
        if (size == 0)
        {
            printf("Array is empty.\n");
            goto startop;
        }
        int lowest = array[0];
        int highest = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] < lowest)
            {
                lowest = array[i];
            }
            if (array[i] > highest)
            {
                highest = array[i];
            }
        }
        cout << "lowest value is= " << lowest << endl;
        cout << "highest value is= " << highest << endl;
        goto startop;
    }

    // Delete element
    if (choice == 7)
    {
        if (size == 0)
        {
            printf("Array is empty.\n");
            goto startop;
        }

        int val, found = 0;
        printf("Enter element to delete: ");
        cin >> val;

        for (int i = 0; i < size; i++)
        {
            if (array[i] == val)
            {
                found = 1;
                for (int j = i; j < size - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                size--;
                printf("Element deleted.\n");
                break;
            }
        }

        if (!found)
        {
            printf("Element not found in array.\n");
        }

        goto startop;
    }

    // exit
    if (choice == 8)
    {
        cout << "Exiting program..." << endl;
        return 0;
    }

    // malfunctioning
    else
    {

        cout << "Please insert a valid option !!" << endl;
        goto startop;
    }
}
