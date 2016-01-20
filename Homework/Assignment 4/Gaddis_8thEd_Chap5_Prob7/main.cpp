/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 20, 2016, 8:54 AM
    Purpose: Table of Salary Doubling starting at a penny
             Double is required because number of significant digits
             Anything larger than $99,999.99 requires double
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //The problem to solve
    cout << endl << "Solution to Gaddis 8th Ed Chap 5 Prob 7.\n";
    cout << endl << "Display a Salary Table.\n" << endl;
    
    //Declare Variables
    unsigned int salary = 1;//Salary starting at a penny
    double totPay = salary;//Total Pay by summing the salary
    
    //Loop to generate the salary table and total paid
    cout << " Day         Salary          Total\n";
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(4) << 1 << setw(15) << salary / 100.0f << setw(15) 
                << totPay / 100.0f << endl;
    for (int day = 2; day <=31; day++){
        //salary *= 2;
        salary <<= 1;//Bit shift to right by 1 bit
        totPay += salary;
        cout << setw(4) << day << setw(15) << salary / 100.0 << setw(15) 
                << totPay / 100.0 << endl;
    }

    //Exit stage right

    return 0;
}

