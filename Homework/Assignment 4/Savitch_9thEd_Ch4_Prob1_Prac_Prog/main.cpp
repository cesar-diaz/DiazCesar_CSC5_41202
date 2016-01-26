/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 26, 2016, 8:01 AM
    Purpose: How many gals per mile converted from liters
 */


//system libraries
#include <iostream>

using namespace std;

//User Libraries 

//Global Constants
const float LIT_GAL = 0.264179f;//Amount of liters in a gallon 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short nLitr, nMiles;
    char answer;
    
    do{
    //Input data
    cout << "How many Liters of gasoline did your car consume on the trip?\n";
    cin >> nLitr;
    cout << "How many miles did you manage to travel with that gas?\n";
    cin >> nMiles;
    
    //Calculate or map inputs to outputs
    float amtGal = LIT_GAL * nLitr;
    float amtMil = nMiles / amtGal;
    
    //Output the results
    cout << "The total liters converted into gallons is: " << amtGal << endl;
    cout << "You got " << amtMil << " miles to the gallon\n";
    cout << endl << "Would you like to run the program again?\n";
    cout << "Y - Yes. Anything else - Exit.\n";
    cin >> answer;
    }while (toupper(answer) == 'Y');
    cout << "Exiting the program.\n";
    
    //Exit stage right

    return 0;
}

