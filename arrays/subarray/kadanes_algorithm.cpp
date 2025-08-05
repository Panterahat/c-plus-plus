#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int numbers[] = {1, 2, 3, -4, 5, -6, -7, -8};
    int sz = sizeof(numbers) / sizeof(int);
    int csum = 0;
    int msum = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        csum = csum + numbers[i];
        msum = max(msum, csum);
        if (csum < 0)
        {
            csum = 0;
        }
    }
    cout << msum << endl;

    return 0;
}