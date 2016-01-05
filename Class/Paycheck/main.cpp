/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 5, 2016, 9:30 AM
 * Purpose: Calculate paycheck 
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
    float payRate=1e1f;     //Pay Rate in dollars per hour
    unsigned char hrsWrkd=40;   //Hours worked 
    
    //Input data
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    //Output the results
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Hours Worked = " <<static_cast<int>(hrsWrkd) << " hrs" << endl;
    cout << "Pay Check = $" << payChk << endl;
    
    //Exit stage right

    return 0;
}

