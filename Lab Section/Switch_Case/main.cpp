/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 6:14 PM
 * Purpose: Switch/Case 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    unsigned short percent;
    cout << "Enter your percentage" << endl;
    cin >> percent;
    
    switch (percent)
    {
        case 0 ... 59: cout << "Using a Switch/Case your letter grade is a F" 
                << endl;
        break;
        case 60 ... 69: cout << "Using a Switch/Case your letter grade is a D"
                << endl;
        break;
        case 70 ... 79: cout << "Using a Switch/Case your letter grade is a C"
                << endl;
        break;
        case 80 ... 89: cout << "Using a Switch/Case your letter grade is a B" 
                << endl;
        break;
        case 90 ... 100: cout << "Using a Switch/Case your letter grade is an A"
                << endl;
        break;
        default: cout << "Incorrect. Only values from 0-100" << endl;
    }
    
          
    return 0;
}

