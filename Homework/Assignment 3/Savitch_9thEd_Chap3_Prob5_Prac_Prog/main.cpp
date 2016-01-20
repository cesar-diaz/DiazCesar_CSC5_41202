/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Check Out IDE
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //The Problem to Solve
    cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 5 "
            "Practice Programs\n";
    cout << endl << "Prime numbers from 3-100\n" << endl;
    
    //Declare and initialize variables
    int num, i, count, n = 100;
    
    //Output or calculate the output required	
    for(num = 3; num <= n; num++){
         count = 0;
         for(i = 2; i <= num / 2; i++){
             if(num % i == 0){
                 count++;
                 break;
             }
        }
         if(count == 0 && num != 1)
              cout << setw(3) << num;
    }
    
    //Exit stage right

    return 0;
}

