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
    
    //Functions
    void win();
    void lose();
    
    //Declare and initialize variables
    unsigned short card1 = rand() % 10 + 1;
    unsigned short card2 = rand() % 10 + 1;
    unsigned short card3 = rand() % 10 + 1;
    unsigned short card4 = rand() % 10 + 1;
    unsigned short cardTot;
    char hitStk;//Players choice to hit or stick
    
    //Prompt the Player 
    cout << "BlackJack\n";
    cout << "*********\n";
    cout << endl;
    cout << "Card 1: " << card1 << endl;
    cout << "Card 2: " << card2 << endl;
    cardTot = card1 + card2;
    cout << "Your card total is: " << cardTot << endl;
    
    //Natural win?
    if (cardTot == 21){
        win();
    }
    if (cardTot > 21){
        lose();
    }
    
    //Prompt User for a hit or stick
    cout << "would you like to hit or stick?\n";
    cin >> hitStk;
    //Prevent user from inputing anything other than h or s
    if(hitStk != 'h' || hitStk != 's'){
        while(hitStk != 'h' && hitStk != 's'){
            cout << "Invalid. H or S\n";
            cin >> hitStk;
        }
    }
    
    //Decide whether the player hit or stick
    switch(toupper(hitStk)){
        case 'H':
            cout << "BlackJack\n";
            cout << "*********\n";
            cout << endl;
            cout << "Card 1: " << card1 << endl;
            cout << "Card 2: " << card2 << endl;
            cout << "Card 3: " << card3 << endl;
            cardTot = cardTot + card3;
            cout << "Your card total is: " << cardTot << endl;
            break;
        case 'S':
            cout << "Your card total is: " << cardTot << endl;
            break;
        default:
            cout << "Invalid\n";
            break;
    }
    
    //Check Winner
    if (cardTot == 21){
        win();
    }
    if (cardTot > 21){
        lose();
    }
    
    //Prompt User for a hit or stick
    cout << "would you like to hit or stick?\n";
    cin >> hitStk;
    //Prevent user from inputing anything other than h or s
    if(hitStk != 'h' || hitStk != 's'){
        while(hitStk != 'h' && hitStk != 's'){
            cout << "Invalid. H or S\n";
            cin >> hitStk;
        }
    }
    
    //Decide whether the player hit or stick
    switch(toupper(hitStk)){
        case 'H':
            cout << "BlackJack\n";
            cout << "*********\n";
            cout << endl;
            cout << "Card 1: " << card1 << endl;
            cout << "Card 2: " << card2 << endl;
            cout << "Card 3: " << card3 << endl;
            cout << "Card 4: " << card4 << endl;
            cardTot = cardTot + card4;
            cout << "Your card total is: " << cardTot << endl;
            break;
        case 'S':
            cout << "Your card total is: " << cardTot << endl;
            break;
        default:
            cout << "Invalid\n";
            break;
    }
    
    //Check Winner
    if (cardTot == 21){
        win();
    }
    if (cardTot > 21){
        lose();
    }
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

void win(){
    cout << "BlackJack\n";
    cout << "*********\n";
    cout << endl;
    cout << "You got 21. You Win!\n";
    return;
}

void lose(){
    cout << "BlackJack\n";
    cout << "*********\n";
    cout << endl;
    cout << "You got over 21. You lose.\n";
    return;
}

