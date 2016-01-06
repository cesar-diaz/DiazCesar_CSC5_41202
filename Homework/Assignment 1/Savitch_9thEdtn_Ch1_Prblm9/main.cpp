/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 11:55 PM
 */

#include <iostream>
using namespace std;

int main( )
{
    int numScnds;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of seconds that the object is falling" << endl;
    cin >> numScnds;
    
    int accel = 32;
    int dist = (accel * (numScnds * numScnds)) / 2;
    
    cout << "The distance your object will travel is " << dist << " feet"
            << endl;
    
    
    
    return 0;
}

