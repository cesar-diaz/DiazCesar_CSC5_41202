/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 11:01 PM
 */

#include <iostream>
//the program did not run when I put a space between the < character and iostream
//the program also did not run when I erased the left hand < before iostream
using namespace std;

int main ()
//when I erased the int, the program seemed to run perfectly 
//the program did not work when I misspelled the word main
//when erased one of the parenthesis after main the program did not run, but
//when both parenthesis erased program did not run and displyed that cin and 
//cout did not name a type
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
//when } was erased from the end the error message asked for it

