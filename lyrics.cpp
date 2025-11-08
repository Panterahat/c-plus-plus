#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

void delay(int milliseconds)
{
    clock_t start = clock();
    while (clock() < start + (milliseconds * CLOCKS_PER_SEC / 1000))
        ;
}

void printWithCustomDelays(const vector<string> &lines, const vector<int> &delays)
{
    for (int i = 0; i < lines.size(); i++)
    {
        cout << lines[i] << " ";
        if (i < delays.size())
        { // Check if delay exists
            delay(delays[i]);
        }
    }
}

int main()
{
    vector<string> lyrics = {
        "ei",
        "mone",
        "ajo",
        "pore",
        "thaki",
        "ami\n",
        "ononto",
        "dube",
        "jai",
        "hotashai\n",
        "tumi",
        "roye",
        "jao",
        "sorgo",
        "dare",
        "amar",
        "opekkhai\n",
        "shunno",
        "chokhe",
        "tomay",
        "dekha\n",
        "ekhono",
        "ekhane",
        "dariye",
        "eka\n",
        "bohudin",
        "pore",
        "tumi",
        "vule",
        "gecho",
        "amar",
        "shotta\n",
        "kotobar",
        "vebe",
        "gechi",
        "ami\n",
        "prithibi",
        "valo",
        "beshe",
        "jai\n",
        "tumi",
        "valo",
        "thako",
        "ghumer",
        "vetor\n",
        "amay",
        "aral",
        "kore\n",
        "venge",
        "pore",
        "akasher\n",
        "nil",
        "karukaj",
        "ontore\n",
    };

    vector<int> delays = {
        // ei mone ajo pore thaki ami (6 words, total 806 ms * 6)
        806,
        806,
        806,
        806,
        806,
        806,
        // ononto dube jai hotashai (4 words, 5100/4)
        1275,
        1275,
        1275,
        1275,
        // tumi roye jao sorgo dare amar opekkhai (7 words, 9700/7)
        1286,
        1286,
        1286,
        1286,
        1286,
        1886,
        1386,
        // shunno chokhe tomay dekha (4 words, 5000/4)
        1250,
        1250,
        1250,
        1250,
        // ekhono ekhane dariye eka (4 words, 5100/4)
        1275,
        1275,
        1275,
        1275,
        // bohudin pore tumi vule gecho amar shotta (7 words, 10000/7)
        1428,
        1428,
        1428,
        1428,
        1428,
        1428,
        1428,
        // kotobar vebe gechi ami (4 words, 5200/4)
        1300,
        1300,
        1300,
        1300,
        // prithibi valo beshe jai (4 words, 5300/4)
        1325,
        1325,
        1325,
        1325,
        // tumi valo thako ghumer vetor (5 words, 5700/5)
        1140,
        1140,
        1140,
        1140,
        1140,
        // amay aral kore (3 words, 4000/3)
        1333,
        1333,
        1333,
        // venge pore akasher (3 words, 5000/3)
        1666,
        1666,
        1666,
        // nil karukaj ontore (3 words, 6000/3)
        2000,
        2000,
        2000,
    };

    printWithCustomDelays(lyrics, delays);

    return 0;
}