#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int s = 0;
    int max = array[0];
    int min = array[0];
    int maxind = 0;
    int minind = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxind = i;
        }
        if (array[i] <= min)
        {
            min = array[i];
            minind = i;
        }
    }
    if (maxind < minind)
    {
        s = maxind + (n - 1 - minind);
        cout << s;
    }
    else
    {
        s = maxind + (n - 2 - minind);
        cout << s;
    }
    return 0;
}
