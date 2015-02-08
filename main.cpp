#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int num = 0;
    cout << "Guess a number between 1 and 10." << endl;
    cin >> num;
    srand((unsigned)time(0));

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

    int random = rand() % 10+1;

    if(num == random)
        cout << "Good guess. You win." << endl;
    else
        cout << "You chose poorly. You lose" << endl;


    return 0;
}
