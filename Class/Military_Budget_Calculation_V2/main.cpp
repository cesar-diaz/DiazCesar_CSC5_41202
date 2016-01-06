/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 6, 2016, 8:13 AM
 */

#include <iostream>

using namespace std;

//Global Constant
const char cnvPerc = 100; //conversion to percentage

//Function prototype

//Execution begins here

int main(int argc, char** argv) {

    float milBdgt = 600e9f;
    float fedBdgt = 3.8e12f;
    float percMil;
    
    percMil = milBdgt / fedBdgt * cnvPerc;
    
    cout << "The Military budget = $" << milBdgt << endl;
    cout <<"The Federal budget = " << fedBdgt << endl;
    cout << " The percentage of the Federal Budget attributed to the "
            "Military = " << percMil << "%" << endl;
    
    return 0;
}

