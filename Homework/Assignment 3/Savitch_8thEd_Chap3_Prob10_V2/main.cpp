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
    const char D_REPRO = 5;           //Days to reproduce
    float crudWt;                //Weight of crud
    unsigned int nDays;          //Number of days to grow crud

    //Initialize the sequence
    fim2 = fim1 = 1; //Start the sequence
    counter = 2;     //Initialize the counter

    //Input the number of terms in the sequence
    cout << "Input the initial weight of the crud in Lbs.\n";
    cin >> crudWt;
    cout << "How many days will the crud be allowed to grow?\n";
    cin >> nDays;
    
    //Calculate the number of terms
    nTerms = nDays / D_REPRO + 1;

    //Output or calculate the output required
    if (nTerms == 1){
        cout << "After " << nDays << " days the crud weighs " 
                << fi*crudWt << " lbs\n" << endl;
    }else if (nTerms == 2){
        cout << "After " << nDays << " days the crud weighs " 
                << fi*crudWt << " lbs\n" << endl;
    }else{
        do{
           fi = fim1 + fim2;
            counter++;
            fim2 = fim1;
            fim1 = fi;
        }while (counter < nTerms); 
        cout << "After " << nDays << " days the crud weighs " 
                << fi*crudWt << " lbs.\n" << endl;
    }

    return 0;
}

