#include <iostream>
#include <limits>

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

    // greeting part
    string name;
    cout << "Hello stranger! \nNice to meet you. Lets introduce ourselves. I am a wanna be AI.My name is MR.ROBOT ,Whats your name ?\n=>";
    getline(cin, name);
    cout << "Hello, " << name << ". How can i help you today?" << endl;

    string input; // this is where user input is stored

    // main loop
    while (true)
    {

        cout << "\n=>: ";
        getline(cin, input);

        if (input.empty())
            continue;

        string lowerInput = toLower(input); // normalize input

        // Keyword: hello
        if (lowerInput.find("hello") != string::npos || lowerInput.find("hi") != string::npos || lowerInput.find("hey") != string::npos)
        {
            int r = rand() % 4; // random number 0-2
            if (r == 0)
                cout << "AI: Hello! Nice to meet you.\n";
            else if (r == 1)
                cout << "AI: Hi there! How's your day?\n";
            else if (r == 2)
                cout << "AI: I'm here for you?\n";
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
            cout << "AI: Have something else in mind?\n";
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
            cout << "AI: Have something else in mind?\n";
        }

        // Keyword: exit
        else if (lowerInput.find("exit") != string::npos || lowerInput.find("quit") != string::npos)
        {
            cout << "AI: Goodbye!\n";
            break;
        }

        // Keyword: time
        else if (lowerInput.find("time") != string::npos || lowerInput.find("date") != string::npos)
        {
            time_t now = time(0);
            char *dt = ctime(&now);
            cout << "The current date and time is: " << dt << endl;
            cout << "AI: Have something else in mind?\n";
        }

        // Keyword: bored
        else if (lowerInput.find("bored") != string::npos || lowerInput.find("game") != string::npos)
        {

            cout << "lets play a game then.which game do you you want to play? " << endl;
            cout << "1. ROCK PAPER SCISSORS" << endl;
            cout << "2.GUESSING GAME" << endl;
            cout << "3.WORD SCRAMBLE" << endl;

            int choice;
            cin >> choice;
            cin.ignore(); // to ignore the newline character after the integer input

            // rock paper scissors
            if (choice == 1)
            {
                bool playAgain = true;

                while (playAgain)
                {
                    cout << "Starting ROCK PAPER SCISSORS..." << endl;
                    cout << "How many points to win? ";
                    int end;
                    cin >> end;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear newline

                    int userScore = 0, aiScore = 0;
                    int userMove;

                    while (userScore < end && aiScore < end)
                    {
                        while (true)
                        {
                            cout << "Enter your move (rock=0, paper=1, scissors=2): ";
                            cin >> userMove;
                            if (userMove >= 0 && userMove <= 2)
                                break;
                            cout << "Invalid move. Try again.\n";
                        }

                        int aiMove = rand() % 3;
                        cout << "AI chose: " << (aiMove == 0 ? "rock" : aiMove == 1 ? "paper"
                                                                                    : "scissors")
                             << endl;

                        if (userMove == aiMove)
                            cout << "It's a tie!\n";
                        else if ((userMove == 0 && aiMove == 2) || (userMove == 1 && aiMove == 0) || (userMove == 2 && aiMove == 1))
                        {
                            cout << "You win this round!\n";
                            userScore++;
                        }
                        else
                        {
                            cout << "AI wins this round!\n";
                            aiScore++;
                        }

                        cout << "Score - You: " << userScore << " AI: " << aiScore << "\n"
                             << endl;
                    }

                    if (userScore == end)
                        cout << "Congratulations! You won the game!\n";
                    else
                        cout << "AI wins the game! Better luck next time.\n";

                    // Ask if user wants to play again
                    cout << "Do you want to play again? (yes/okay to continue): ";
                    string ans;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
                    getline(cin, ans);
                    string lowerans = toLower(ans);

                    playAgain = (lowerans.find("yes") != string::npos || lowerans.find("okay") != string::npos);
                }
                cout << "AI: Have something else in mind?\n";
            }
        }

        else
        {
            cout << "AI: I don't know what to say to that.\n";
            cout << "AI: Have something else in mind?\n";
        }
    }

    return 0;
}