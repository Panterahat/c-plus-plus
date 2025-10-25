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
        "Now", "you", "do", "what", "they", "told", "ya\n",
        "Now", "you", "do", "what", "they", "told", "ya\n ",
        "Those", "who", "died\n",
        "are", "justified\n",
        "For", "wearing", "the", "badge,", "they're", "the", "chosen", "whites\n",
        "You", "justify\n",
        "those", "that", "died\n",
        "By", "wearing", "the", "badge,", "they're", "the", "chosen", "whites\n",
        "Those", "who", "died", "are", "justified\n",
        "For", "wearing", "the", "badge,", "they're", "the", "chosen", "whites\n",
        "You", "justify", "those", "who", "died\n",
        "By", "wearing", "the", "badge,", "they're", "the", "chosen", "whites\n"};

    vector<int> delays = {
        200, 200, 200, 200, 200, 200, 200, // "Now you do what they told ya"
        200, 200, 200, 200, 200, 200, 200, // "Now you do what they told ya"

        350, 350, 350, 350, 350,                // "Those who died are justified"
        350, 350, 350, 350, 350, 350, 350, 350, // "For wearing the badge..."

        350, 350, 350, 350, 350,                // "You justify those that died"
        350, 350, 350, 350, 350, 350, 350, 350, // "By wearing the badge..."

        350, 350, 350, 350, 350,                // "Those who died are justified"
        350, 350, 350, 350, 350, 350, 350, 350, // "For wearing the badge..."

        350, 350, 350, 350, 350,               // "You justify those who died"
        350, 350, 350, 350, 350, 350, 350, 350 // "By wearing the badge..."
    };

    printWithCustomDelays(lyrics, delays);

    return 0;
}