/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 25, 2016, 8:32 AM
 * Purpose: Menu Assignment 4
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
    
    //Declare and initialize variables
    unsigned short nSolutn;     //Problem solution to display
    bool reDspl = true;         //Exit program when false
    
    //Menu to Display Solution
    do{
        
         //Input problem to display, i.e. menu
        cout << "Assignment 4 Problem Set\n";
        cout << "Type 1 to Display Problem 1\n";
        cout << "Type 2 to Display Problem 2\n";
        cout << "Type 3 to Display Problem 3\n";
        cout << "Type 4 to Display Problem 4\n";
        cout << "Type 5 to Display Problem 5\n";
        cout << "Type 6 to Display Problem 6\n";
        cout << "Type 7 to Display Problem 7\n";
        cout << "Type 8 to Display Problem 8\n";
        cout << "Type 9 to Display Problem 9\n";
        cout << "Type 10 to Display Problem 10\n";
        
        cout << "Type anything else to exit\n";
        cin >> nSolutn;
        
        //Solutions to all the problems
        switch (nSolutn){
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{ 
                break;
            }
            case 7:{
                break;
            }
            case 8:{
                break;
            }
            case 9:{
                break;
            }
            case 10:{
                break;
            }
            default:{
                cout << "Exiting the Program\n";
                reDspl = false;
            }
        }
    }while (reDspl);
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    

    return 0;
}
