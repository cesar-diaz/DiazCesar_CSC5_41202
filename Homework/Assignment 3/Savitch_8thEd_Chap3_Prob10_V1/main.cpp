/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 19, 2016, 9:32 AM
 * Purpose: Fibonacci Crud Problem
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //The Problem to Solve
    cout << endl << "Solution to Savitch 8thEd Chap3 Prob10\n";
    cout << endl << "The Fibonacci Sequence\n" << endl;

    //Declare Variables
    unsigned int fi, fim1, fim2; //Designation it the sequence
    unsigned short nTerms;       //Number of terms in the sequence
    unsigned short counter;      //Current position in sequence

    //Initialize the sequence
    fim2 = fim1 = 1; //Start the sequence
    counter = 2;     //Initialize the counter

    //Input the number of terms in the sequence
    cout << "Input the number of terms in the sequence\n";
    cin >> nTerms;

    //Output or calculate the output required
    if (nTerms == 1){
        cout << "Term " << nTerms << " in the sequence = "
                << fim2 << endl << endl;
    }else if (nTerms == 2){
        cout << "Term " << nTerms << " in the sequence = "
                << fim2 << endl << endl;
    }else{
        do{
           fi = fim1 + fim2;
            counter++;
            fim2 = fim1;
            fim1 = fi;
        }while (counter < nTerms); 
        cout << "Term " << nTerms << " in the sequence = "
                << fi << endl << endl;
    }

    return 0;
}

