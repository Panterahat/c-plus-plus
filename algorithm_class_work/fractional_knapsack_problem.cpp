#include <iostream>
using namespace std;
int main()
{
    int num;
    double tprice = 0;
    int limit;
    cout << "enter limit =";
    cin >> limit;
    cout << endl
         << "enter the product number =";

    cin >> num;
    int ammount[num];
    int price[num];
    // input
    for (int i = 0; i < num; i++)
    {
        cin >> ammount[i];
        cin >> price[i];
    }
    double avgprice[num];

    // average count
    for (int i = 0; i < num; i++)
    {
        avgprice[i] = (double)price[i] / ammount[i];
    }
    // showing outputs
    for (int i = 0; i < num; i++)
    {
        cout << avgprice[i] << " ";
    }
    // sorting
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (avgprice[j] > avgprice[j + 1])
            {
                swap(avgprice[j], avgprice[j + 1]);
                swap(ammount[j], ammount[j + 1]);
                swap(price[j], price[j + 1]);
            }
        }
    }
    cout << endl;
    // showing outputs
    for (int i = 0; i < num; i++)
    {
        cout << avgprice[i] << " ";
    }
    for (int i = num - 1; i >= 0; i--)
    {
        if (ammount[i] < limit)
        {
            limit = limit - ammount[i];
            tprice = tprice + avgprice[i] * ammount[i];
        }
        else
        {
            tprice = tprice + avgprice[i] * limit;
            break;
        }
    }

    cout << tprice;
}