/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 6, 2016, 10:44 AM
 */

#include <iostream>

using namespace std;

//Global constants

const char cnvQrtr = 25; //cents per quarter
const char cnvDime = 10; //cents per dime
const char cnvNikl = 5; //cents per nickel
const char cnvPnDl = 100; //conversion from pennies to dollars

int main(int argc, char** argv) {
    
    unsigned char nQrtrs,nNkls,nDimes; //declare inputs, number of Q,D,N
    unsigned short total ; //total
    
    //input the number of coins

    cout << "How many quarters do you have? 0-9" << endl;
    cin >>nQrtrs;
    cout << "How many dimes do you have? 0-9" << endl;
    cin >>nDimes;
    cout << "How many nickels do you have? 0-9" << endl;
    cin >>nNkls;
    
    //calculate the total
    
    total = (nQrtrs - 48) * cnvQrtr + (nDimes - 48) * cnvDime + 
            (nNkls - 48) * cnvNikl;
    
    //output the result
    
    cout << "number of quarters = " << nQrtrs << endl;
    cout << "number of dimes = " << nDimes << endl;
    cout << "number of nickels = " << nNkls << endl;
    cout << "The dollar amount = $" << 1.0f * total / cnvPnDl << endl;

    //Exit stage right
    
    return 0;
}

