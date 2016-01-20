/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 20, 2016, 8:54 AM
 * Purpose: Table of Temperatures
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
    cout << endl << "Solution to Gaddis 8th Ed Chap 5 Prob 12.\n";
    cout << endl << "Display a temperature table.\n" << endl;
    
    //Declare Variables
    float slope = 5.0f/9;//Slope of the line for temperature conversion c/f
    char intrcpt = -32;//Scaled 9/5 degree c
    unsigned char c1 = 0, c2 = 100, f1 = 32, f2 = 212;//Data pts of freezing and boiling
    
    //Loop to generate the degree celsius and output the table 
    cout << "Fahrenheit   Celsius   Celsius\n";
    cout << fixed << setprecision(2) << showpoint;
    for (int f = f1; f <= f2; f++){
        float ceq = slope * (f + intrcpt);
        float cIntrp = c1 + static_cast<float>(f - f1) / (f2 - f1) * (c2 - c1);
        cout << setw(10) << f << setw(10) << ceq << setw(10) << cIntrp << endl;
    }

    //Exit stage right

    return 0;
}

