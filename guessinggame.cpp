#include<iostream>

#include<cstdlib>

#include<ctime>


using namespace std;

intmain()
 
{
    srand(time(0)); // Seed the random number generator

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guessCount = 0;

    cout << "Welcome to the Number Guessing Game!\n";

    while (true) {
        int guess;
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        guessCount++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << guessCount << " tries!\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }

    return 0;
}
