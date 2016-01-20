/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Check Out IDE
 */


//system libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Constants
const float PI = 4 * atan(1);

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //The Problem to Solve
    cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 6\n";
    cout << endl << "Buoyancy of a sphere.\n" << endl;

    //Find the volume of the sphere
    int rad;
    int weight;
    float volume;
    float totVolu;
    
    //Input radius and weight of the sphere
    cout << fixed << setprecision(2);
    cout << "Enter the radius of your sphere in feet?\n";
    cin >> rad;
    cout << "What is the weight of the sphere in lbs?\n";
    cin >> weight;
    volume = (4/3.0) * PI * pow(rad,3);
    cout << "The volume of your sphere is " << volume << endl;
    
    //Find the buoyant force
    float force;
    int weight;
    float wtOfWtr = 62.4f;
    
    force =  volume * wtOfWtr;
    cout << "The buoyant force of the sphere = " << force << endl;
    
    //Calculate and output the results
    if (force >= weight){
        cout << "This sphere should float on water.\n";
    }else{
        cout << "This sphere is too heavy to float on water.\n";
    }
    
    
    //Exit stage right

    return 0;
}

