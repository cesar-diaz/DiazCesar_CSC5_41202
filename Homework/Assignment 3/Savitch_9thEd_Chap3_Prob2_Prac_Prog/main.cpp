/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Check Out IDE
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //The Problem to Solve
    cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 2\n";
    cout << endl << "Calculate credit payments\n" << endl;
    
    //Declare and Initialize Variables
    char questn;
    
        //Declare and initialize variables
        float total, intrst, mPay;
        float balance; 
        cout << fixed << setprecision(2) << showpoint;
        
        //Input the balance
        cout << "Enter the balance of the account.\n";
        cin >> balance;

        if( balance > 1000){   
            intrst = (balance - 1000.0f) * .01f + .015f * 1000.0f; 
            total = balance + intrst;
            if(total <= 10){
                mPay = total;
            }else{
                if(0.1 * total > 10){                 
                    mPay = 0.1f * total;
                }else{
                    mPay = 10.0f;
                }
            }
        }else{
            intrst = balance * .015f;
            total = balance + intrst;
            if(total <= 10){
                mPay = total;
            }else{
                if(0.1f * total > 10){
                    mPay = 0.1f * total;
                }else{
                    mPay = 10.0f;
                }
            }
        }
        
        //Output the results
        cout << "Total amount due = $" << total << endl;
        cout << "Total interest due = $" << intrst << endl;
        cout << "Minimum payment due = $" << mPay;
       
 
        
    //Declare and initialize variables
    
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

