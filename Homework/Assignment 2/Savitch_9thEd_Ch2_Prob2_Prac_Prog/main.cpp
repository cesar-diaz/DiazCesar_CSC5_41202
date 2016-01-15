/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 13, 2016, 1:52 PM
 * Purpose: Babylonian method to find square root
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    //Declare and Initialize variables
    float n;
    float r, guess;
    float tol = .01f; //Accuracy of the result/tolerance 
    int counter = 0;//See how many loops it took to get the answer
    cout << fixed << setprecision(4);
    
    //Input data
    cout << "Input the number you want the square root of: ";
    cin >> n;
    guess = n / 2;
    
    //Approximate the square root
    do{
        r = n / guess;
        guess = (guess + r) / 2; 
        counter ++;
    }while (abs ((r - guess)/ guess) * 100 > tol);//End loop when close enough
    
    //Output the results
    cout << "The square root using cmath = " << sqrt(n) << endl;
    cout << "The r = " << r << endl;
    cout << "The guess is = " << guess << endl; 
    cout << "The loop executed " << counter << " times.\n";

    //Exit stage right
    return 0;
}

