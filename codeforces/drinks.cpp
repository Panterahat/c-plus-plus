#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count += a[i];
    }

    cout << float(count) / float(n) << endl;
    return 0;
}
