#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Enter the border numbers of a number sequence from n to m, which has to be positive."<< endl;
    int n;
    int m;
    int guessnum = 0;
    cout << "Enter n\n" ;
    cin >> n;
    cout << "Enter m\n";
    cin >> m;


    srand(time(0)); //seed random number generator
    int num = rand() % (m - n + 1) + n; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";

    int guess;
    while (guess != num) {



        cout << "Enter a guess between "<<n<< " and "<<m<< ":";
        cin >> guess;
        guessnum++;

        if(guess == 0)
        { cout << "The end.";
            break;}
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in ";
        }
    }



     cout << "You tried " <<guessnum<< " time/times."<< endl;
    return 0;
}
