#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{
    int numbers[] = {-2, -4, -6, -6, -22, -4, -5, -1, -2};
    int sz = sizeof(numbers) / sizeof(int);
    int maxsum = INT_MIN;
    for (int st = 0; st < sz; st++)
    {
        int csum = 0;
        for (int i = st; i < sz; i++)
        {
            csum = csum + numbers[i];
            maxsum = max(maxsum, csum);
        }
    }
    cout << "maximum subarray sum is " << maxsum << endl;

    return 0;
}