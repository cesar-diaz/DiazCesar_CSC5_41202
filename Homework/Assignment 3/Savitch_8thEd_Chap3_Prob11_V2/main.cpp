/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 19, 2016, 10:40 AM
 * Purpose: Calculate e^x
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
    cout << endl << "The Finite sum for e^\n" << endl;
    
    //Declare and initialize variables for e^x
    const unsigned char N_TERMS = 13;
    float etox = 1, x;//e^x
    
    //Input the value x
    cout << "Input x of e^x computation\n";
    cin >> x;
    
    //Calculate e^x
    for (int n = 1; n <= N_TERMS; n++){
        //Declare and initialize variables
        unsigned int factN = 1;//N and N factorial

        //Calculate the factorial
        for (int i = 1; i <= n; i++){
            factN*= i;
        }
        
        //Calculate e^x with the above factorial
        etox += pow (x,n) / factN;
    }
    
    
    
    //Output the results
    cout << "The exact value of e^" << x << " = " << exp(x) << endl;
    cout << "The approx value of e^" << x << " = " << etox << endl << endl;
    
    //Exit stage right

    return 0;
}

