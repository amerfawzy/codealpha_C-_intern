#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); // seed random number generator
    num = rand() % 100 + 1; // random number between 1 and 100
    cout << "The computer has chosen a number between 1 and 100.\n"; // Output the computer's chosen number
    cout << "Guess My Number Game\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high! The correct number is: " << num << "\n\n";
        else if (guess < num)
            cout << "Too low! The correct number is: " << num << "\n\n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    } while (guess != num);

    return 0;
}
