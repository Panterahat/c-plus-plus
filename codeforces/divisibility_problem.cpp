#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % b[i] == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b[i] - (a[i] % b[i]) << endl;
        }
    }

    return 0;
}
