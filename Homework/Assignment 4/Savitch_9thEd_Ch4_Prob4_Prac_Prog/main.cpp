/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 26, 2016, 8:33 AM
    Purpose: Calculate the rate of inflation on an item in the past year.
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
    
    //Declare and initialize variables
    float oldPrice, nowPrice, rate;
    char answer;
    cout << fixed << setprecision(2);
    
    do{
    //Input data
    cout << "What was the price of your item last year?\n";
    cin >> oldPrice;//Price that the item used to be
    cout << "What is the price of the item now?\n";
    cin >> nowPrice;
    
    //Calculate or map inputs to outputs
    rate = (nowPrice - oldPrice) / oldPrice;
    
    //Output the results
    cout << "The rate of inflation over the past year is " << rate << "%\n";
    cout << endl << "Would you like to run the program again?\n";
    cout << "Y - Yes. Anything else - Exit.\n";
    cin >> answer;
    }while (toupper(answer) == 'Y');
    cout << "Exiting the program.\n";
    
    //Exit stage right

    return 0;
}

