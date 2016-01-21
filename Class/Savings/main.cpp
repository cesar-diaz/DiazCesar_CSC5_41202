/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 21, 2016, 11:07 AM
    Purpose: Savings
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //Problem to solve
    cout << "Fun look at savings and rule of 72" << endl;
    cout << "http://california.municipalbonds.com/bonds/recent/" 
            << endl;
    
    //Declare and initialize variables
    float balance = 100.0f;//Initial balance in $'s
    float intRate = 0.05f;//Interest rate/year
    float rule72 = 0.72f / intRate;//Rule 72, future value = 2 * present value
    float intErnd;
    
    //Output the Table
    cout << "The interest rate = " << intRate * 100 << "%\n";
    cout << "At this interest Principle should double every " << rule72 
            << " years.\n";
    cout << "Year   Year   Balance   Interest Earned" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << " 0     2016" << setw(10) << balance << setw(11) 
            << balance * intRate << endl;
    
    //Calculate the Savings
    balance *= (1 + intRate);
    for (int y = 1, year = 2017; y <= 50; y++, year++){
        cout << setw(2) << y <<" " << setw(8) << year << setw(10) << balance 
                << setw(11) << balance * intRate << endl;
        balance *= (1 + intRate);
        
    }
    
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

