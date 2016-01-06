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

#include <iostream>
using namespace std;

int main( )
{
    int lnthFnc, fncLng, fncShrt;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the length of one of the longer sides of the fence"
            " in feet" <<endl;
    cin >> fncLng;
    cout << "Now enter the length of one of the shorter sides of the"
            " fence" << endl;
    cin >> fncShrt;
    
    lnthFnc = (fncLng * 2) + (fncShrt * 2);
    
    cout << "The total length of fence needed is " << lnthFnc << 
            " feet." << endl;
    
    

    return 0;
}

