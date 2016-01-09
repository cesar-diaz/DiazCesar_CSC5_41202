/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 10:45 PM
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
    
    unsigned short totLnth, fncWdth, fncHgt;//variables for fence height, width, and total 
    
    //Promting the user to enter their data
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the width of the area that you wish to eclose" <<endl;
    
    //Input data
    
    cin >> fncWdth;
    cout << "Now enter the height of the area that you wish to enclose" << endl;
    cin >> fncHgt;
    
    //Calculate data
    
    totLnth = (fncWdth * 2) + (fncHgt * 2);//All 4 sides added together
    
    //Output the results
    
    cout << "The total length of fence needed is " << totLnth << 
            " feet." << endl;
    
    //Exit stage right

    return 0;
}

