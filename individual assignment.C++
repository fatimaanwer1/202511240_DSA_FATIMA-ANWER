#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // chosen number
    int chosenNumber = 7;

    // variable for user input
    int userGuess = 0;

    // array/list to store all guesses
    vector<int> guesses;

    // loop continues until the user guesses correctly
    while (userGuess != chosenNumber)
    {
        cout << "Enter a number: ";
        cin >> userGuess;

        // store every guess in the list
        guesses.push_back(userGuess);

        // compare the guess with the chosen number
        if (userGuess > chosenNumber)
        {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Correct" << endl;
        }
    }

    // display all guesses after the correct answer
    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << endl;
    }

    return 0;
}