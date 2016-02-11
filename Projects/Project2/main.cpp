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
int win = 0;

//Function Prototypes 
void playHand();
void startDeck(int deck[]);
void shuffle(int deck[], int size);
int genRand(int low, int high);
int topCard(int deck[]);
void addHand(int hand[], int cardAdd);
void natWin(const int pHand[], const int dHand[], char play);
int handVal(const int hand[]);
int cardValue(int card);
bool playAgn(char&);
void showCrd(const int cards[], int numCards, bool hideCrd);
void showCard(int card);
void blackJk(const int pHand[], const int dHand[], char play);
void ace11(int pHand[]);
bool pDraw(char&);
void bustChk(const int pHand[], const int dHand[], char play);
void whoWon(const int pHand[], const int dHand[]);
void dDraw(int dHand[], int deck[], int pHand[]);
void scoreBrd(const int pHand[], const int dHand[]);

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Game of BlackJack
    playHand();
    
    //Exit stage right

    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Play Hand
//Inputs
// All other functions live within this one
//******************************************************************************
void playHand(){
    
    //Choice to keep loop going
    char play = 'N';
    
    do{
        
        char draw = 'H';
    
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
    blackJk(pHand, dHand, 'Y');
    
    //Output player and dealers hands
    cout << "Your Hand: " << endl;
    showCrd(pHand, 10, false);
    cout << endl;
    cout << "Dealers Hand: " << endl;
    showCrd(dHand, 10, true);
    
    //Ace or eleven
    ace11(pHand);
    
    //Check hit?
    while(pDraw(draw)){
        addHand(pHand, topCard(deck));
        cout << "The Dealer dealt another card." << endl;
        //Output new hand
        cout << "Your hand:" << endl;
        showCrd(pHand, 10, false);
        //Check ace
        ace11(pHand);
        //Check bust
        bustChk(pHand, dHand, 'Y');
        //Check win
        blackJk(pHand, dHand, 'Y');    
    }
    
    //Dealer hit
    dDraw(dHand, deck, pHand);
    cout << endl;
    
    //Check loss
    bustChk(pHand, dHand, 'Y');
    
    //Check win
    blackJk(pHand, dHand, 'Y');
    
    //Compare and determine winner
    whoWon(pHand, dHand);
    cout << endl;
    
    cout << "Wins: " << win << endl; 
}while(playAgn(play));
             
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Start Deck
//Inputs
// deck[]->Slots in deck
//******************************************************************************
void startDeck(int deck[]){
    
    //Declare local variables
    int rank = 101;
    int i = 0;
    
    //Hearts
    for(i = 0; i <= 13; i++){
        deck[i] = rank++;
    }
    //Diamonds
    for(i = 13; i <= 26; i++){
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Shuffle
//Inputs
// deck[]->Slots in deck
// size->Max number of slots = 51
//******************************************************************************
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Get Random
//Inputs
// low->Least amount of cards(none) = 0
// high->Max amount of cards in deck = 52
//Outputs
// scoreBrd->Outputs both the player and dealers hand
// randNum->Random card [0,52]
//******************************************************************************
int genRand(int low, int high){
    
    //Set random seed generator
    static bool rndSeed = true;
    int randNum;
    //First time executed, seed is set
    if(rndSeed){
        srand(static_cast<unsigned int>(time(0)));
        rndSeed = false; //rndSeed set to false so generated seed stays
    }
    //Generate random number [low, high]
    randNum = rand() % (high - low + 1) + low;
    
    return randNum;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Top Card
//Inputs
// hand[]->Empty slots in which to place card
// cardAdd->topCard(deck) Upcoming randomly generated card
//Outputs
// scoreBrd->Outputs both the player and dealers hand
// cout->If first 2 cards = 21. Winner.
// hand[i]->topCard(deck) takes the place of the next drawn card
//******************************************************************************
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Add Hand
//Inputs
// hand[]->Empty slots in which to place card
// cardAdd->topCard(deck) Upcoming randomly generated card
//Outputs
// scoreBrd->Outputs both the player and dealers hand
// cout->If first 2 cards = 21. Winner.
// hand[i]->topCard(deck) takes the place of the next drawn card
//******************************************************************************
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Natural Win
//Inputs
// dHand->Value of dealers hand
// play->Keep playing or not
// pHand->Value of players hand
//Outputs
// scoreBrd->Outputs both the player and dealers hand
// cout->If first 2 cards = 21. Winner.
// playAgn()->Asks to play again
//******************************************************************************
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Hand Value
//Inputs
// hand[]->All cards in hand
//Outputs
// addVals->Returns added values of cards in hand
//******************************************************************************
int handVal(const int hand[]){
    
    //Declare local variables
    int addVals = 0;
    //Loop and add all values
    for(int i = 0; i < 9; i++){
        addVals = addVals + cardValue(hand[i]);
    }
    //Return added values
    return addVals;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Card Value
//Inputs
// card->Randomly generated card
//Outputs
// cardVal->Returns value of K,Q,J = 10. Ace = 1 or 11
//******************************************************************************
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Play Again
//Inputs
// play->Keep playing or not
//Outputs
// play->Returned as either true or false
//******************************************************************************
bool playAgn(char& play){
    
    //Promt user for another hand
    cout << endl << "Would you like to play another hand? (Y/N)" << endl;
    cin >> play;
    if(play == 'y' || play == 'Y'){
        playHand();
        return(true);
    }
    //Else exit program
    else{
       // return (false);
        exit(1);
    }
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Score Board
//Inputs
// dHand->Value of dealers hand
// pHand->Value of players hand
//Outputs
// cout->Dealers hand
// cout->Players hand
//******************************************************************************
void scoreBrd(const int pHand[], const int dHand[]){
    //Output players card/value
    cout << endl;
    cout << "Players Hand: ";
    showCrd(pHand, 10, false);
    cout << " " << handVal(pHand) << " pts." << endl;
    cout << endl;
    //Output dealers card/value
    cout << "Dealers Hand: ";
    showCrd(dHand, 10, false);
    cout << " " << handVal(dHand) << " pts." << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Show Card (Dealer)
//Inputs
// deck->Shuffled cards from which to take
// numCards->Max possible cards = 10
// hideCrd->Arguement true or false for hiding dealers first card
//Outputs
// cout->If dealers first card "**" is displayed
// cout->If not first card, card is shown
//******************************************************************************
void showCrd(const int deck[], int numCards, bool hideCrd){
    //Hide dealers first card
    if(hideCrd){
        cout << "** ";
    }else{
        showCard(deck[0]);
        cout << " ";
    }
    //Display cards on hand along with rank and suit
    for(int i = 1; i < numCards; i++){
        if(deck[i] != 0){
            showCard(deck[i]);
            cout << " ";
        }else{
            cout << "";
        }
    }
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Show Card
//Inputs
// card->Randomly generated card
//Outputs
// playAgn()->Asks to play again
// win->Either win - 1 or win + 1
// cout->1 = A. 11 = J. 12 = Q. 13 = K.
//******************************************************************************
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
    if(card == 0){
        cout << "";
    //Define suits
    }else{
        //Hearts 
        if(card >= 101 && card <= 114){
            cout << static_cast<char>(3);
        //Diamonds
        }else if(card >= 201 && card <= 214){
            cout << static_cast<char>(4);
        //Clubs
        }else if(card >= 301 && card <= 314){
            cout << static_cast<char>(5);
        //Spades
        }else if (card >= 401 && card <= 414){
            cout << static_cast<char>(6);
        }
        
    }
    
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               BlackJack
//Inputs
// dHand->Value of dealers hand
// play->Keep playing or not
// pHand->Value of players hand
//Outputs
// playAgn()->Asks to play again
// win->Either win - 1 or win + 1
// scoreBrd()->Outputs total wins so far
//******************************************************************************
void blackJk(const int pHand[], const int dHand[], char play){
    
    //Define local variables
    int pScore = handVal(pHand);
    int dScore = handVal(dHand);
    //Player has blackjack, dealer doesnt
    if(pScore == 21 && dScore != 21){
        //Calculate wins
        scoreBrd(pHand, dHand);
        //Output win and ask ask to play again
        cout << endl;
        cout << "Blackjack! You win." << endl;
        win = win + 1;
        cout << "Wins: " << win << endl;
        playAgn(play);
    //Player and dealer have blackjack
    }else if(pScore == 21 && dScore == 21){
        //Calculate wins
        scoreBrd(pHand, dHand);
        //Output win and ask ask to play again
        cout << endl;
        cout << "Both you and the dealer have 21. Its a tie." << endl;
        win = win;
        cout << "Wins: " << win << endl;
        playAgn(play);
    }
    
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Ace or Eleven
//Inputs
// pHand->Value of players hand
// sftHrd->1 or 11
//Outputs
// pHand->Value set to either 1 or 11
//******************************************************************************
void ace11(int pHand[]){
    
    //Loop through cards in hand
    for(int i = 0; i < 9; i++){
        //Declare local variables
        int isAce = cardValue(pHand[i]);
        int sftHrd;
        //If card is Ace, prompt player for input
        if(isAce == 1 || isAce == 11){
            cout << endl;
            cout << "Would you like your Ace to be a 1 or  11? (1/11)";
            cout << endl;
            cin >> sftHrd;
            //Chooses 1
            if(sftHrd == 1){
                if(isAce == 11){ pHand[i] = pHand[i] + 13;}
            //Chooses 11
            }else if(sftHrd == 11){
                if(isAce == 1){ pHand[i] = pHand[i] - 13;}
            //Not 1 or 11
            }else if(sftHrd != 1 || sftHrd != 11){
                cout << endl << "Please enter the number 1 or 11." << endl;
                ace11(pHand);
                
            }
        }
    }
    
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Player Draw
//Inputs
// draw->Hit or Stay
//Outputs
// draw->Returns either true or false
//******************************************************************************
bool pDraw(char& draw){
    
    //prompt user
    cout << endl << "Would you like to hit or stand? (h/s) ";
    cin >> draw;
    cout << endl;
    if(toupper(draw) == 'H'){
        return true;
    }else{
        return false;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Bust Check
//Inputs
// dHand->Value of dealers hand
// play->Keep playing or not
// pHand->Value of players hand
//Outputs
// playAgn()->Asks to play again
// win->Either win - 1 or win + 1
//******************************************************************************
void bustChk(const int pHand[], const int dHand[], char play){
    
    //Define local Variables
    int pScore = handVal(pHand);
    int dScore = handVal(dHand);
    //Player bust?
    if(pScore > 21){
        cout << "You bust with " << handVal(pHand) << " points." << endl;
        cout << endl;
        win = win - 1;
        cout << "Wins: " << win << endl;
        playAgn(play);
    //Dealer bust?
    }else if(dScore > 21){
        scoreBrd(pHand, dHand);
        cout << endl;
        cout << "The Dealer bust. You win!" << endl;
        cout << endl;
        win = win + 1;
        cout << "Wins: " << win << endl;
        playAgn(play);
    }
    
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Who Won
//Inputs
// dHand->Value of dealers hand
// pHand->Value of players hand
//Outputs
// win->Either win - 1 or win + 1
//******************************************************************************
void whoWon(const int pHand[], const int dHand[]){
    
    //Declare local variables
    int pScore = handVal(pHand);
    int dScore = handVal(dHand);
    //Display score
    scoreBrd(pHand, dHand);
    //Decide winner
    if((pScore < 22) && (pScore > dScore) || ((dScore > 21) && (pScore < 22))){
        cout << endl;
        cout << "You win!" << endl;
        win = win + 1;
    }else{
        //Tie
        if(pScore == dScore){
            cout << endl;
            cout << "You tied." << endl;
        //Lost
        }else{
            cout << endl;
            cout << "You lose." << endl;
            win = win - 1;
        }
    }
    
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Dealer Draw
//Inputs
// dHand->Value of dealers hand
// deck->Shuffled cards from which to take
// pHand->Value of players hand
//Outputs
// addHand->New card added to hand
//******************************************************************************
void dDraw(int dHand[], int deck[], int pHand[]){
    
    //Loop through Dealers cards
    for(int i = 0; i < 9; i++){
        //Dealer must hit
        if(handVal(dHand) < 17)
        {	
	    addHand(dHand, topCard(deck));
            //Display Dealers cards if Dealer has 17 or more points
        }else{	    
            //Dealer didnt hit to get to 17
            if(i == 0){               
                cout << "The Dealer stands." << endl;
                break;
                //Dealer hit once to get to 17
            }else if(i == 1){ 
                cout << "The Dealer hit a card and stands." << endl;
                break;
                //Dealer hit more than once to get to 17
            }else{
                cout << "The Dealer hit " << i << " cards and stands." << endl;
                break;
            }	
        }
    }
}