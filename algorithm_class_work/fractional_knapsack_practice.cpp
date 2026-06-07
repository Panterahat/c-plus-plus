#include <iostream>
using namespace std;
int main()
{
    int maxcapacity = 40;
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    int weight[n], value[n], valueperweight[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the weight and value of item " << i + 1 << ": ";
        cin >> weight[i] >> value[i];
        valueperweight[i] = value[i] / weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (valueperweight[j] < valueperweight[j + 1])
            {
                swap(valueperweight[j], valueperweight[j + 1]);
                swap(weight[j], weight[j + 1]);
                swap(value[j], value[j + 1]);
            }
        }
    }

    int currentweight = 0;
    double totalvalue = 0.0;
    int index = 0;
    while (currentweight < maxcapacity && index < n)
    {
        int remainingweight = maxcapacity - currentweight;
        if (remainingweight >= weight[index])
        {
            currentweight += weight[index];
            totalvalue += value[index];
        }
        else
        {
            totalvalue += valueperweight[index] * remainingweight;
            currentweight = maxcapacity;
        }
        index++;
    }
    cout << "Maximum value in Knapsack = " << totalvalue << endl;
}