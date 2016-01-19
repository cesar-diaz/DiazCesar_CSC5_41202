/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 19, 2016, 10:40 AM
 * Purpose: Factorial
 */


//system libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned int n, factN = 1;//N and N factorial
    
    //Input data
    cout << "Enter the number you would like to compute the factorial n!\n";
    cout << "The limit of this calculation is <= 13.\n";
    cin >> n;
    
    //Calculate the factorial
    for (int i = 1; i <= n; i++){
        factN*= i;
    }
    
    //Output the results
    cout << n << "! = " << factN << endl;
    
    //Exit stage right

    return 0;
}

