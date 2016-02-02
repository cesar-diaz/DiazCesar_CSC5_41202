/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 1, 2016, 10:18 AM
    Purpose: Deal the two initial card for the player
 */


//system libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned short cardTot;
    char card1 = rand() % 13 + 1;
    char card2 = rand() % 13 + 1;
    char card3;
    char card4;
    
    //Output Initial Hand
    cout << static_cast<unsigned short>(card1) << endl;
    cout << static_cast<unsigned short>(card2) << endl;
    cardTot = card1 + card2;
    
    //Does an Ace equal a 1 or 11
    if (card1 == 1){
        cout << "Would you like your Ace to be a (1/11)?\n";
        unsigned short answer;
        cin >> answer;
        switch (answer){
            case 1:
                card1 = 1;
                break;
            case 11:
                card1 = 11;
                break;
            default:
                cout << "Error!\n";
                break;
        }
    }
    if (card2 == 1){
        cout << "Would you like your Ace to be a (1/11)?\n";
        unsigned short answer;
        cin >> answer;
        switch (answer){
            case 1:
                card1 = 1;
                break;
            case 11:
                card1 = 11;
                break;
            default:
                cout << "Error!\n";
                break;
        }
    }
    
    //Output Hand after choosing value of Ace
    cout << static_cast<unsigned short>(card1) << endl;
    cout << static_cast<unsigned short>(card2) << endl;
    cardTot = card1 + card2;
    cout << "Your card total is " << cardTot << endl;
    
    //Natural Win?
    (cardTot == 21? cout << "You got 21. Winner!\n":
        cardTot > 21? cout << "You got over 21. Bust.\n":
            cardTot > 21? cout << "Would you like to hit or stick (h/s)\n":
                cout << "Would you like to hit or stick (h/s)\n");
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}
