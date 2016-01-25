/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Testing throwing dice
 */


//system libraries
#include <iostream>//I/O
#include <cstdlib>//srand and rand function
#include <ctime>//time to set the random number seed

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned short MAX_THRW = 6000;//Max number of throws
    //frequency of our dice throws
    unsigned short frq1 = 0, frq2= 0, frq3 = 0, frq4 = 0, frq5 = 0, frq6 = 0;
    unsigned short total;
    
    //Input data
    
    //Throw the dice
    for (int throws = 1; throws <= MAX_THRW; throws++){
        char die1 = rand() % 6 + 1;//Number between [1,6]
        char sum = rand() % 6 + 1;
        switch(sum){
            case 1: frq1++; break;
            case 2: frq2++; break;
            case 3: frq3++; break;
            case 4: frq4++; break;
            case 5: frq5++; break;
            case 6: frq6++; break;
            default: cout << "Not possible" << endl;
        }
    }
    total = frq2 + frq3 + frq4 + frq5 + frq6;
    
    //Output the results
    cout << "The throw statistics are" << endl;
    cout << "1 was thrown " << frq1 << " times." << endl;
    cout << "2 was thrown " << frq2 << " times." << endl;
    cout << "3 was thrown " << frq3 << " times." << endl;
    cout << "4 was thrown " << frq4 << " times." << endl;
    cout << "5 was thrown " << frq5 << " times." << endl;
    cout << "6 was thrown " << frq6 << " times." << endl;
    
    //Exit stage right

    return 0;
}

