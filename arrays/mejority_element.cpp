#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {1, 1, 2, 2, 1};
    int sz = sizeof(numbers) / sizeof(int);
    int min = sz / 2;
    for (int i = 0; i < sz; i++)
    {
        int count = 0;
        for (int j = 0; j < sz; j++)
        {
            
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count > min)
        {
            cout << "mejority element is " << numbers[i] << endl;
            break;
        }
    }
    return 0;
}