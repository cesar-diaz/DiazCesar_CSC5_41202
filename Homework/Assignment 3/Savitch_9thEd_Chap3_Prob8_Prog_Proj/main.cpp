/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 19, 2016, 10:40 AM
 * Purpose: Calculate e^x in one line
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    cout << endl << "Solution to Savitch 8thEd Chap3 Prob11\n";
    cout << endl << "The Finite sum for e^x\n" << endl;
    
    //Declare and initialize variables for e^x
    const unsigned char N_TERMS = 13;
    float tol = 1e-6f, term = 1, etox = 1, x;//e^x
    float nTerm; // Counter to determine how many terms
    
    //Input the value x
    cout << "Input x of e^x computation\n";
    cin >> x;
    
    //Calculate e^x
    for (nTerm = 1; term > tol; term*= x / nTerm++, etox += term);
 
    //Output the results
    cout << "The exact value of e^" << x << " = " << exp(x) << endl;
    cout << "The number of trerms it took to approx e^" << x << " = "
            << nTerm << endl;
    cout << "The approx value of e^" << x << " = " << etox << endl << endl;
    
    //Exit stage right

    return 0;
}

