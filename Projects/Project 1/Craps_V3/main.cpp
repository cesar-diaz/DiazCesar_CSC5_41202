/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 25, 2016, 11:06 AM
    Purpose: Simple game of craps
 */


//system libraries
#include <iostream>//I/O
#include <cstdlib>//srand and rand function
#include <ctime>//time to set the random number seed
#include <fstream>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    //frequency of our dice throws
    unsigned short wins = 0, losses = 0, games;
    ofstream out;
    
    //Open the file 
    out.open ("Cardgame.dat");
    
    //Input data
    cout << "How many games of Craps would you like to play?" << endl;
    cout << "Utilize a number between 10,000 and 40,000" << endl;
    cin >> games;
    while (games < 10000 || games > 40000){
        cout << "How many games of Craps would you like to play?" << endl;
        cout << "Utilize a number between 10,000 and 40,000" << endl;
        cin >> games;
    }
    
    //Throw the dice
    for (int game = 1; game <= games; game++){
        char die1 = rand() % 6 + 1;//Number between [1,6]
        char die2 = rand() % 6 + 1;//Number between [1,6]
        char sum = die1 + die2;
        if (sum == 2 || sum == 3 || sum == 12) losses++;
        else if (sum == 7 || sum == 11) wins++;
        else{
            //Roll again
            bool kpRln = true;
            do{
                die1 = rand() % 6 + 1;//Number between [1,6]
                die2 = rand() % 6 + 1;//Number between [1,6]
                char sum2 = die1 + die2;
                switch(sum2 == 7){
                        case true: {losses++; kpRln = false;}
                        default:
                            if (sum == sum2){wins++; kpRln = false;}
                            }
            }while (kpRln);
        }
    }
    
    //Output the results
    cout << "Out of " << games << " played." << endl;
    cout << "You won " << wins << " games and " << endl;
    cout << "You lost " << losses << " games" << endl;
    cout << "Percentage wise" << endl;
    cout << "You won " << 100.0f * wins / games << "% of games" << endl;
    cout << "You lost " << 100.0f * losses / games << "% of games" << endl;
    cout << "Your wins and losses total: " << wins + losses << endl;
    
    //Output the results to file
    out << "Out of " << games << " played." << endl;
    out << "You won " << wins << " games and " << endl;
    out << "You lost " << losses << " games" << endl;
    out << "Percentage wise" << endl;
    out << "You won " << 100.0f * wins / games << "% of games" << endl;
    out << "You lost " << 100.0f * losses / games << "% of games" << endl;
    out << "Your wins and losses total: " << wins + losses << endl;
    
    //Exit stage right
    out.close();

    return 0;
}

