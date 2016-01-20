/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 20, 2016, 8:54 AM
 * Purpose: Game of rock, paper, scissors 
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //The problem to solve
    cout << endl << "Solution to Savitch 9thEd Chap 3 Prob1.\n";
    cout << endl << "The Rock-Paper-Scissors Game.\n" << endl;
    
    //Set the random number seed
    srand (static_cast<unsigned int>(time(0)));
    char questn;//Question, does player want to keep playing
    
    //Loop until player wants to quit
    do{
    
        //Declare and initialize variables
        char computr;//The computers play
        char player;//The players move

        //Input the players move
        do{
            cout << endl << "What is your move R,P,S?\n";
            cin >> player;
            player = toupper (player);
        }while(!(player == 'P' || player == 'R' || player == 'S'));

        //Computer generated play
        do{
            computr = rand() % 4 + 80;
        }while (computr == 'Q');

        //Output the moves by the computer and player
        cout << "The computer played " << computr << endl;
        cout << "The Players move " << player << endl;

        //Determine the result
        if (computr == player){
            cout << "The result is tie.\n";
        }else if (player == 'P' && computr == 'R'){
            cout << "The player wins!\n";
        }else if (player == 'R' && computr == 'S'){
            cout << "The player wins!\n";
        }else if (player == 'S' && computr == 'P'){
            cout << "The player wins!\n";
        }else{
            cout << "The player loses!\n";
        }

        //Keep Playing?
        cout << endl << "Do you want to continue playing?\n";
        cin >> questn;
    }while (toupper(questn) == 'Y');

    //Exit stage right

    return 0;
}

