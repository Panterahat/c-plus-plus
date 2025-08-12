#include <iostream>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n >> p;
    int a[p];
    cin >> q;

    int b[q];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    int hello = 0;
    for (int k = 1; k <= n; k++)
    {

        for (int i = 0; i < p; i++)
        {
            if (k == a[i])
            {

                hello++;
            }
        }
        for (int j = 0; j < q; j++)
        {
            if (k == b[j])
            {

                hello++;
            }
        }
    }
    if (hello == n)
    {
        cout << "I become the guy.   ";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}