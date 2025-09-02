#include <iostream>
#include <string>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
using namespace std;

// Convert string to lowercase for case-insensitive search
string toLower(const string &str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
}

int main()
{
    srand(time(0)); // initialize random seed
    string input;

    cout << "Welcome to Dummy AI! Type something:\n";

    while (true)
    {
        cout << "\nYou: ";
        getline(cin, input);

        if (input.empty())
            continue;

        string lowerInput = toLower(input); // normalize input

        // Keyword: hello
        if (lowerInput.find("hello") != string::npos || lowerInput.find("hi ") != string::npos)
        {
            int r = rand() % 3; // random number 0-2
            if (r == 0)
                cout << "AI: Hello! Nice to meet you.\n";
            else if (r == 1)
                cout << "AI: Hi there! How's your day?\n";
            else
                cout << "AI: Hey! Good to see you.\n";
        }
        // Keyword: joke
        else if (lowerInput.find("joke") != string::npos)
        {
            int r = rand() % 3;
            if (r == 0)
                cout << "AI: Why do programmers hate nature? Too many bugs!\n";
            else if (r == 1)
                cout << "AI: Why did the developer go broke? Because he used up all his cache!\n";
            else
                cout << "AI: I would tell you a UDP joke, but you might not get it.\n";
        }
        // Keyword: sad
        else if (lowerInput.find("sad") != string::npos)
        {
            int r = rand() % 3;
            if (r == 0)
                cout << "AI: Cheer up! Tomorrow is a new day.\n";
            else if (r == 1)
                cout << "AI: Don't worry, everything will be okay.\n";
            else
                cout << "AI: Sending virtual hugs your way.\n";
        }
        // Keyword: exit
        else if (lowerInput.find("exit") != string::npos || lowerInput.find("quit") != string::npos)
        {
            cout << "AI: Goodbye!\n";
            break;
        }
        else
        {
            cout << "AI: I don't know what to say to that.\n";
        }
    }

    return 0;
}
