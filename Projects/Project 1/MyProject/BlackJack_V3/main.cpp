/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 1, 2016, 10:18 AM
    Purpose: Game of BlackJack
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable for money
    unsigned short count = 0;
    ofstream out;
    //Players cards
    int card1, card2, cardHit , hand;
    //Dealers cards
    int dcard1, dcard2, dcard3, dcard4, dcard5, dhand;
    //Initial Money
    int money = 1000;
    unsigned int bet;
    //Hit or stick choices
    char h, s;
    char choice = 'h' || 's';
    char answr;
    char dblBet;//double bet
    
    //Run the game while there is money left
    do{
        //Prompt user to make a bet
        cout << "Your money: " << setw(9) << "$" << money << endl;
        cout << "Place your bet (min $5, max $" << money << ")\n";
        cout << "$";
        cin >> bet;
        
        //Prevent user from making bet more than total money or less than $5 
        while (bet < 5 || bet > money){
            if (bet > money){
                cout << "Not enough money.\n";
                cout << "Place your bet (min $5, max $" << money << ")\n";
                cout << "$";
                cin >> bet;
            }
            if (bet < 5){ 
                cout << "Bet is too low.\n";
                cin >> bet;
            }
        }
        //Display the bet
        cout << "Your bet:" << setw(12) << "$" << bet << endl << endl;
        
        //Generate the dealers hand
        dcard1 = rand() % 11 +1;
        dcard2 = rand() % 11 +1;
        dcard3 = rand() % 11 +1;
        dcard4 = rand() % 11 +1;
        dcard5 = rand() % 11 +1;
        dhand = dcard1 + dcard2;
        
        //Output dealers hand
        cout << "Dealer's card 1:    " << dcard1 << endl;
        cout << "Dealer's card 2:    (hidden)\n" << endl;
        
        //Generate Player's hand
        card1 = rand() % 11 + 1;
        card2 = rand() % 11 + 1;
        hand = card1 + card2;
        
        //Output players hand
        cout << "Your card 1:        " << card1 << endl;
        cout << "Your card 2:        " << card2 << endl;
        cout << "Your card total:    " << hand << endl << endl;
        cout << "Would you like to double your bet?(y/n)\n";
        cin >> dblBet;
        bet = (toupper(dblBet) == 'Y'? 2 * bet: bet);
        cout << endl;
        //Display the bet
        cout << "Your bet:" << setw(12) << "$" << bet << endl << endl;
        
        //Hit or Stick
        cout << "Hit or Stick?(h/s)\n";
        //Loop until player busts or chooses to stick
        do{
            cin >> choice;
            cout << endl;
            if(toupper(choice) == 'H'){
                cardHit = rand() % 11 +1;
                switch(cardHit){
                    case 1:
                        short ace;
                        cout << "Do you want your ace to be a 1 or 11?\n";
                        cin >> ace;
                        cardHit = ace;
                        break;
                    default:
                        hand = hand;
                        break;
                }
                hand += cardHit;
                cout << "Your card:          " << cardHit << endl;
                cout << "Your card total:    " << hand << endl;
                if (hand < 21){
                    cout << "Would you like to double your bet?\n";
                    cin >> dblBet;
                    bet = (toupper(dblBet) == 'Y'? 2 * bet: bet);
                    //Display the bet
                    cout << endl;
                    cout << "Your bet:" << setw(12) << "$" << bet << endl 
                            << endl;
                    cout << "Hit or Stick?(h/s)\n" << endl;
                }   
            }else if (toupper(choice) == 'S'){
                cout << "Your card total:    " << hand << endl << endl;
                break;
            }
        }while (hand < 21);
        
        //Variable money changes according to winning, loosing, or drawing
        if(hand > 21){
            money -= bet;
            cout << "You got over 21. Bust.\n";
            cout << endl;
        }else{
            //Show the dealers hand
            cout << "Dealer's card 2:    " << card2 << endl;
            cout << "Dealer's total:     " << dhand << endl;
            //Decide if dealer will hit or stay
            if(dhand < 16){
                dhand += dcard3;
                cout << "Dealer's card 3:    " << dcard3 << endl;
                cout << "Dealer's total:     " << dhand << endl;
            }
            if(dhand < 16){
                dhand += dcard4;
                cout << "Dealer's card 3:    " << dcard4 << endl;
                cout << "Dealer's total:     " << dhand << endl;
            }
            if(dhand < 16){
                dhand += dcard5;
                cout << "Dealer's card 3:    " << dcard5 << endl;
                cout << "Dealer's total:     " << dhand << endl;
            }
            //Did dealer bust?
            if(dhand > 21){
                money += bet;
                cout << "The dealer Bust. You win.\n";
                cout << endl;
            }else{
                cout << "Dealer stands.\n";
                cout << "Dealers total:      " << dhand << endl;
                cout << endl;
                //Determine draw?
                if(hand == dhand){
                    cout << "Draw.\n";
                    cout << endl;
                    //Determine blackjack?
                }else if(hand == 21){
                    money += bet;
                    cout << "You got 21. You win.\n";
                    cout << endl;
                    //Determine win by default?
                }else if(hand > dhand){
                    money += bet;
                    cout << "You win the hand.\n";
                    cout << endl;
                    //Determine loss?
                }else if(dhand > hand){
                    money -= bet;
                    cout << "You lost the hand.\n";
                    cout << endl;
                } 
            }
        }
        //Count number of games played
        for (int i = 0; i <= count; i++){
            count = count + 1;
            break;
        }
        
        //Ask player if they want to play again
        cout << "Would you like to play again?(y/n)\n";
        cin >> answr;
        cout << endl;
        if(toupper(answr) == 'N'){
            break;
        }
        
        
    }while (money > 0);
    
    //Print the users winnings on a separate file
    //Open the file
    out.open ("wallet.dat");
    out << "RECIEPT OF EARNINGS" << endl;
    out << "# of Games:        " << count << endl;
    out << "Your wallet total: $" << money << endl;
    //Close the file
    out.close();
   
    cout << "Total games played: " << count << endl;
    cout << "Your wallet total:  $" << money << endl;
    cout << "Your wallet has also been printed to a .dat file\n";
    
    //Exit stage right

    return 0;
}