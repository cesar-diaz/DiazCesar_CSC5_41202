/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 28, 2016, 10:24 AM
    Purpose:
 */


//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //The Problem to solve
    cout << endl << "Soulution to Savitch 9th Ed Chap 3 Prob 3.\n";
    cout << endl << "The Roman Numeral Conversion Program.\n";
    
    //Declare and initialize variables
    unsigned short number;
    unsigned char n1000s, n100s, n10s, n1s;//Number of 10^x's
    
    cout << "What number would you like to convert?\n";
    cin >> number;
    cout << "The number to convert = " << number << endl;
    
    //Calculate the number of 1000s, 100s, 10s, 1s
    n1000s = (number - number % 1000) / 1000;//Number of 1000s
    number = (number - n1000s * 1000);//Subtract off 1000s
    n100s = (number - number % 100) / 100;//Number of 100s
    number = (number - n100s * 100);//Subtract off 100s
    n10s = (number - number % 10) / 10;//Number of 10s
    n1s = (number - n10s * 10);//Subtract off 10s to get 1s
    
    //Output the number and its components
    cout << "The number of 1000s = " << static_cast<int>(n1000s) << endl;
    cout << "The number of 100s  = " << static_cast<int>(n100s) << endl;
    cout << "The number of 10s   = " << static_cast<int>(n10s) << endl;
    cout << "The number of 1s    = " << static_cast<int>(n1s) << endl;
    
    //Output the stars
    do{
        cout << "*";
        n1000s--;
    }while (n1000s > 0);
    cout << endl;
    
    //Output the stars
    do{
        cout << "*";
        n100s--;
    }while (n100s > 0);
    cout << endl;
    
    //Output the stars
    do{
        cout << "*";
        n10s--;
    }while (n10s > 0);
    cout << endl;
    
    //Output the stars
    do{
        cout << "*";
        n1s--;
    }while (n1s > 0);
    cout << endl;
    
    //Output the results
    cout << "The Roman Numeral = ";
    
    
    //Exit stage right

    return 0;
}

