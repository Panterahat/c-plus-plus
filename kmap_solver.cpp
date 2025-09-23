#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // cout << "enter element number";
    // int n;
    // cin >> n;

    // kmap for v variables
    int kmap[2][2] = {0};
    // cout << "enter kmap values = ";
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cin >> kmap[i][j];
    //     }
    // }
    cout << "enter the number minterms = ";
    int numminterms;
    cin >> numminterms;
    int blocks[numminterms];
    cout << "enter the minterms = ";
    for (int i = 0; i < numminterms; i++)
    {
        cin >> blocks[i];
    }
    for (int i = 0; i < numminterms; i++)
    {
        if (blocks[i] == 0)
        {
            kmap[0][0] = 1;
        }
        else if (blocks[i] == 1)
        {
            kmap[0][1] = 1;
        }
        else if (blocks[i] == 2)
        {
            kmap[1][0] = 1;
        }
        else if (blocks[i] == 3)
        {
            kmap[1][1] = 1;
        }
    }
    // there is a much more efficient way to do this
    /*for (int i = 0; i < numminterms; i++) {
    int row = blocks[i] / 2;
    int col = blocks[i] % 2;
    kmap[row][col] = 1;
}
*/

    cout << "kmap is" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)

        {
            cout << kmap[row][column] << " ";
        }
        cout << endl;
    }

    string result = "";
    vector<string> terms;
    bool covered[2][2] = {false};

    // 1. Check all 4 ones
    if (kmap[0][0] && kmap[0][1] && kmap[1][0] && kmap[1][1])
    {
        result = "1";
    }
    else
    {
        // 2. Check horizontal pairs first (larger groups)
        if (kmap[0][0] && kmap[0][1])
        {
            terms.push_back("A'");
            covered[0][0] = covered[0][1] = true;
        }
        if (kmap[1][0] && kmap[1][1])
        {
            terms.push_back("A");
            covered[1][0] = covered[1][1] = true;
        }

        // 3. Check vertical pairs for uncovered cells
        if (kmap[0][0] && kmap[1][0] && !covered[0][0] && !covered[1][0])
        {
            terms.push_back("B'");
            covered[0][0] = covered[1][0] = true;
        }
        if (kmap[0][1] && kmap[1][1] && !covered[0][1] && !covered[1][1])
        {
            terms.push_back("B");
            covered[0][1] = covered[1][1] = true;
        }

        // 4. Add remaining single cells
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (kmap[i][j] && !covered[i][j])
                {
                    string term = "";
                    term += (i == 0 ? "A'" : "A");
                    term += (j == 0 ? "B'" : "B");
                    terms.push_back(term);
                }
            }
        }

        // Combine all terms
        for (int i = 0; i < terms.size(); i++)
        {
            if (i > 0)
                result += " + ";
            result += terms[i];
        }
    }

    cout << "Simplified expression: " << result << endl;

    return 0;
}