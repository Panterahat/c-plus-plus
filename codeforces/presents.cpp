#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[101], result[101];

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        result[p[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
