#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>
using namespace std;

int main(){

    // This is a console based guessing game.
    
    //Variables
    int number;
    int guesses = 0;
    bool itsok = true;

    //Random number
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    
    cout << "Welcome to my number guessing game.\nWritten in C++.\nOnly 1 - 100." << endl;
    
    //Loop
    while (true){

        guesses++;
        cout << "Enter a number : ";
        cin >> number;
        
        //Conditions
        if (number > 100 or number < 0){
            itsok = false;
            cout << "Invalid number." << endl;
            break;
        }
        else if (number == random_number){
            cout << "Win." << endl;
            break;
        }
        else if (number < random_number){
            cout << "Too low." << endl;
        }
        else if (number > random_number){
            cout << "Too High" << endl;
        }
        else {
            break;
        }

    }

    if (itsok == true)
        cout << "Guesses = " << guesses << endl;

    return 0;
}