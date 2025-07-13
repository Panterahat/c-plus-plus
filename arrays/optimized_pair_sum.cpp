#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {1, 1, 3, 4, 6, 8, 25, 34};
    int sz = sizeof(numbers) / sizeof(int);
    int find=7;
    int j=sz-1;
    for (int i = 0; i < j;i++ )
    {
        
        if (numbers[i] + numbers[j] == find)
        {
              cout << numbers[i] << "and" << numbers[j] << "are pair sum numbers" << endl;
        }
        if (numbers[i] + numbers[j] > find)
        {
           i--;
            j--;
        }
        if (numbers[i] + numbers[j] < find)
        {
           i--;
            i++;
        }

    }

    return 0;
}