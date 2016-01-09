/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 11:13 PM
 * Purpose: Read 2 integers and the calculate their sum and product
 */

//System libraries
#include <iostream>
using namespace std;

//User libraries

//Global libraries

//Function prototypes

//Execution begins here

int main( )
{
    
    //Declare and initialize variables
    
    int num1, num2;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the first number" << endl;
    
    //Input data
    
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    
    //Output the results
    cout << "The sum of those two numbers is " << num1 + num2 <<
            //the calculation of data is done in the output
            " and their product is " << num1 * num2 << endl;
    
    cout << "This is the end of the program.\n";
    
    //Exit stage right

    return 0;
}

