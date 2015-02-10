#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int num = 0, counter = 0;
    bool found = false;
    srand((unsigned)time(0));
     int random = rand() % 10+1;

    while(found == false)
    {
        counter++;
        cout << "Guess a number between 1 and 10." << endl;
        cin >> num;

        if(cin.fail())
        {
            cout << "Input was not numeric, you lose." << endl;
            return 0;
        }
        if(num < 1 || num > 10)
        {
            cout << "Number must be between 1 and 10. You lose." << endl;
            return 0;
        }
        if(num == random)
        {
            cout << "Good guess. You won in " << counter << " guesses."<< endl;
            found = true;
        }

        else
        {
            cout << "You chose poorly. Guess again" << endl;
            if (num < random)
                cout << "Hint: Your guess was too low." << endl;
            else
                cout << "Hint: Your guess was too high." << endl;
                cin.ignore();

        }


    }

    return 0;
}
