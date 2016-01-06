/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 11:35 PM
 */

#include <iostream>
using namespace std;

int main( )
{
    int penn, nick, dime, quart;
    
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pennies you have" << endl;
    cin >> penn;
    cout << "Enter the number of nickels you have" << endl;
    cin >> nick;
    cout << "Enter the number of dimes you have" << endl;
    cin >> dime;
    cout << "Enter the number of quarters you have" << endl;
    cin >> quart;
    
    int pennCnt = penn;
    int nickCnt = nick * 5;
    int dimeCnt = dime * 10;
    int quartCnt = quart * 25;
    int cntTotl = pennCnt + nickCnt + dimeCnt + quartCnt;
    
    cout << "You have " << cntTotl << " cents." << endl;
    
    
    return 0;
}

