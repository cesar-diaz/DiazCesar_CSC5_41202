/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 10:12 PM
 * Purpose: Modify display 1.8 from chapter 1 in savitch book
 */

//System Libraries
#include <iostream>
using namespace std;

//User libraries

//Global libraries

//Function prototypes

//Execution begins here

int main( )
{
    //Declare and initialize variables
    
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    //Input data 
    
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Calculate data
    
    total_peas = number_of_pods * peas_per_pod;
    
    //Output the results 
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    //Exit stage right

    return 0;
}

