/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 26, 2016, 8:16 AM
    Purpose: How many gals per mile converted from liters for two cars
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
    unsigned short nLitr1, nMiles1, nLitr2, nMiles2;
    char answer;
    
    do{
    //Input data
    cout << "How many Liters of gasoline did car #1 consume on the trip?\n";
    cin >> nLitr1;
    cout << "How many miles did you manage to travel with that gas?\n";
    cin >> nMiles1;
    cout << "How many Liters of gasoline did car #2 consume on the trip?\n";
    cin >> nLitr2;
    cout << "How many miles did you manage to travel with that gas?\n";
    cin >> nMiles2;
    
    //Calculate or map inputs to outputs
    float amtGal1 = LIT_GAL * nLitr1;
    float amtMil1 = nMiles1 / amtGal1;
    float amtGal2 = LIT_GAL * nLitr2;
    float amtMil2 = nMiles2 / amtGal2;
    
    //Output the results
    cout << "Total liters converted into gallons for car #1 is: " << amtGal1 
            << endl;
    cout << "You got " << amtMil1 << " miles to the gallon\n";
    cout << "Total liters converted into gallons for car #2 is: " << amtGal2 
            << endl;
    cout << "You got " << amtMil2 << " miles to the gallon\n";
    if (amtMil1 > amtMil2){
        cout << "Car #1 is more fuel efficient than car #2\n";
    }else{
        cout << "Car #2 is more fuel efficient than car #1\n";
    }
    cout << endl << "Would you like to run the program again?\n";
    cout << "Y - Yes. Anything else - Exit.\n";
    cin >> answer;
    }while (toupper(answer) == 'Y');
    cout << "Exiting the program.\n";
    
    //Exit stage right

    return 0;
}

