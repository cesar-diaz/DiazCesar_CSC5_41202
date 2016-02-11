/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Check Out IDE
 */


//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Constants
int cardTop = 0;
int win = 1;

//Function Prototypes 
void playHand();
void startDeck(int deck[]);
void shuffle(int deck[], int size);
int genRand(int low, int high);
int topCard(int deck[]);
void addHand(int hand[], int cardAdd);
void natWin(const int pHand[], const int dHand[], char play);
int cardValue(int card);
bool playAgn(char&);
void showCrd(const int cards[], int numCards, bool hideCrd);
void showCard(int card);

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

void playHand(){
    
    //Choice to keep loop going
    char play = 'N';
    
    //Initialize the game
    int deck[52];
    startDeck(deck);
    shuffle(deck, 51);
    
    //Declare dealer and player hand
    int pHand[10] = {0};
    int dHand[10] = {0};
    
    //Deal the initial hand
    addHand(pHand, topCard(deck));
    addHand(dHand, topCard(deck));
    addHand(pHand, topCard(deck));
    addHand(dHand, topCard(deck));
    
    //Check for natural win
    natWin(pHand, dHand, 'Y');
    
    
    return;
}

void startDeck(int deck[]){
    
    //Declare local variables
    int rank = 101;
    int i = 0;
    
    //Hearts
    for(i = 0; i <= 13; i++){
        deck[i] = rank++;
    }
    //Diamonds
    for(i = 13; 1 <= 26; i++){
        deck[i] = rank++ + 100 - 14;
    }
    //Clubs
    for(i = 26; i <= 39; i++){
        deck[i] = rank++ + 200 - 28;
    }
    //Spades
    for(i = 39; i <= 51; i++){
        deck[i] = rank++ + 300 - 42;
    }
    
    return;
}

void shuffle(int deck[], int size){
    
    //Loop deck until shuffled
    for(int i = 0; i < 250; i++){
        //Define variables for swap
        int temp;
        int rand1 = genRand(0, size);
        int rand2 = genRand(0, size);
        //swap
        temp = deck[rand1];
        deck[rand1] = deck[rand2];
        deck[rand2] = temp;
    }
    
    return;
}

int genRand(int low, int high){
    
    //Set random seed generator
    bool rndSeed = true;
    int randNum;
    //First time executed, seed is set
    if(rndSeed){
        srand(static_cast<unsigned int>(time(0)));
        rndSeed = false; //rndSeed set to false so generated seed stays
    }
    //Generate random number [low, high]
    randNum = rand() % 52;
    
    return randNum;
}

int topCard(int deck[]){
    
    //Loop through deck
    for(int i = 0; i < 51; i++){
        //Find card that isnt 0
        if(deck[i] != 0){
            //Copy card
            cardTop = deck[i];
            //Replace said card with 0
            deck[i] = 0;
            //Return copy of card (cardTop)
            return cardTop;
        }
    }
}

void addHand(int hand[], int cardAdd){
    
    //Loop through hand
    for(int i = 0; i < 9; i++){
        //Replace 0 with a random card
        if(hand[i] == 0){
            hand[i] = cardAdd;
            break;
        }
    }
}

void natWin(const int pHand[], const int dHand[], char play){
    //Define local variables
    int pScore = handVal(pHand);
    int dScore = handVal(dHand);
    //Player has blackjack dealer does not
    if(pScore == 21 && dScore != 21){
        //Calculate wins
        scoreBrd(pHand, dHand);
        //Output win and ask ask to play again
        cout << endl;
        cout << " Natural Blackjack! You win." << endl;
        win = win + 1;
        playAgn(play);
    }
    
    return;
}

int handVal(const int hand[]){
    
    //Declare local variables
    int addVals = 0;
    //Loop and add all values
    for(int i = 0; i < 9; i++){
        addVals = addVals = cardValue(hand[i]);
    }
    //Return added values
    return addVals;
}

int cardValue(int card){
    
    //Declare local variables
    int cardVal;
    //Assign A,J,Q,K a value
    switch(card % 100){
        case 1:
            cardVal = 11;
            break;
        case 11:
        case 12:
        case 13:
            cardVal = 10;
            break;
        case 14:
            cardVal = 1;
            break;
        //Default for non A, J, Q, K
        default:
            cardVal = (card % 100);
    }
    
    return cardVal;
}

bool playAgn(char& play){
    
    //Promt user for another hand
    cout << endl << "Would you like to play another hand? (y/n)" << endl;
    cin >> play;
    if(toupper(play) == 'Y'){
        playHand();
        return(true);
    }
    //Else exit program
    else{
        return false;
    }
    
}

void scoreBrd(const int pHand[], const int dHand[]){
    //Output players card/value
    cout << "Players Hand: ";
    showCrd(pHand, 10, false);
    cout << " " << handVal(dHand) << " pts." << ednl;
    cout << endl;
    //Output dealers card/value
    cout << "Dealers Hand: ";
    showCrd(dHand, 10, false);
    cout << " " << handVal(dHand) << " pts." << endl;
}

void showCrd(const int deck[], int numCards, bool hideCrd){
    //Hide dealers first card
    if(hideCrd){
        cout << "** ";
    }else{
        showCard(deck[0]);
        cout << " "
    }
    //Display cards on hand along with rank and suit
    for(int i = 1; i < numCards; i++){
        if(deck[i] != 0){
            showCard(deck[i]);
            cout << " "
        }else{
            cout << "";
        }
    }
    
}

void showCard(int card){
    
    //Show nothing for 0
    if(card == 0){
        cout << "";
    }else{
        switch(card % 100){
            case 1:
                cout << "A";
                break;
            case 11: 
                cout << "J";
	        break;
	    case 12: 
		cout << "K";
		break;
	    case 13: 
		cout << "Q";
		break;
            case 14:
                cout << "A";
                break;
                //Non face cards
            default:
                cout << card % 100;
        }
    }
    //Show nothing for 0
    
}
