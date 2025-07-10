#include <iostream>
using namespace std;
int main()
{
    // input section
    int n;
    cout << "enter the total number= ";
    cin >> n;
    int array[n];
    cout << "enter the numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // matching section
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i+1; j < n; j++)
        {
            if (array[j] == array[i])
            {
               break;
            }
             if (array[j] != array[i]){
                cout<<array[i]<<endl;
            }
        }
    }
}