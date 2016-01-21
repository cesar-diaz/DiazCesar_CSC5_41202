/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 20, 2016, 9:50 PM
    Purpose: Converts celsius to fahrenheit until they are both equal
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //The Problem to Solve
    cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 7\n";
    cout << endl << "Convert Celsius to Fahrenheit until equal\n" << endl;
    
    //Declare and Initialize variables
    int ctemp = 101;//Temperature to be input in celsius
    float ftemp;//Temperature of celsius converted to fahrenheit
    
    cout << fixed << setprecision(2); 
    
    //Conversion from Celsius to Fahrenheit
    do{
        ctemp--;
        ftemp = ((9 * static_cast<float>(ctemp)) / 5) + 32;
    }while(ctemp != ftemp);
    
    //Output the results
    cout << "These two temperatures are equal when:\n";
    cout << "Celsius = " << ctemp << endl;
    cout << "Fahrenheit = " << ftemp << endl;
    
    //Exit stage right

    return 0;
}

