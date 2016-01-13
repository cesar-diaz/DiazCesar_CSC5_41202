/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 13, 2016, 1:52 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    int n;
    double r, guess;
    cout << "Input the number you want the square root of: ";
    cin >> n;
    cout << fixed << setprecision(3);
    guess = n / 2;
    r = n / guess;
    guess = (guess + r) / 2;
    while (guess != r){
        r = n / guess;
        guess = (guess + r) / 2;
    }
    cout << "Your number was " << n << endl;
    cout << "The square root of " << n << " using cmath is  = " 
            << sqrt(n) << endl;
    cout << "The first pass r = " << r << endl;
    cout << "The first pass guess = " << guess << endl;

    return 0;
}

