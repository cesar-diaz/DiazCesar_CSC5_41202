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
    
    //Declare and initialize variables
    char computr;//The computers play
    char player;//The players move
    
    //Input the players move
    do{
        cout << "What is your move R,P,S?\n";
        cin >> player;
        player = toupper (player);
    }while(!(player == 'P' || player == 'R' || player == 'S'));
    
    //Computer generated play
    do{
        computr = rand() % 4 + 80;
    }while (computr == 'Q');
    
    //Output the results
    cout << "The computer played " << computr << endl;
    cout << "The Players move " << player << endl;
    
    //Exit stage right

    return 0;
}

