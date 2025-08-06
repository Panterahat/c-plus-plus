#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int cp = 0;
    int mp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cp = cp + b[i] - a[i];
        if (cp > mp)
        {
            mp = cp;
        }
    }
    cout << mp << endl;
    return 0;
}