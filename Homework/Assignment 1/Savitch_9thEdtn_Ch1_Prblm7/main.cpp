/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 11:13 PM
 */

#include <iostream>
using namespace std;

int main( )
{
    int num1, num2;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "The sum of those two numbers is " << num1 + num2 <<
            " and their product is " << num1 * num2 << endl;
    
    cout << "This is the end of the program.\n";
    

    return 0;
}

