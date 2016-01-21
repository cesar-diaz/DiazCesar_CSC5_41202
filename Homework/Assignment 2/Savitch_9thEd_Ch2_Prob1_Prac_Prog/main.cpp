/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 6:59 PM
 * Purpose: How many cereal boxes would it take to get a ton
 */

#include <iostream>

using namespace std;

const double TON_OZ = 35273.92;

int main(int argc, char** argv) {
    
    float boxWght;
    unsigned short tries;
    cout << "How many times would you like to run this program?\n";
    cin >> tries;
    while (tries == tries && tries != 0)
    {
        cout << "Enter the weight of your cereal box in ounces\n";
        cin >> boxWght;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(6);
        cout << "You have " << boxWght / TON_OZ << " metric tons\n";
        cout.precision(2);
        cout << "You would need " << TON_OZ / boxWght << " boxes to make "
                "a metric ton\n";
        tries = (tries - 1);
        cout << "You have " << tries << " tries remaining\n";
        cout << endl;    
    }
    
    return 0;
}

