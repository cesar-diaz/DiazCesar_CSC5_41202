/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 7, 2016, 10:44 AM
 * Purpose: How far does it drop
 */

#include <iostream> //I/O library
#include <cstdlib>  //random function location
#include <cmath>    //match functions
#include <ctime>    //time to set the random sed
#include <iomanip>  //format library
#include <fstream>  //Reading/writing to a file

using namespace std;

//User libraries

//Global constants

const float GRAVITY = 32.174f; //Sea level earth acceleration constant ft/sec^2

//Function Prototypes

int main(int argc, char** argv) {
    //Set the random number seed
    
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    
    ofstream out; //Declare a file stream object called out
    float drpTime, distance; //Time in seconds and distance in feet
    
    //Inputing the time with a random number and opening a file
    
    drpTime = rand() % 11 + 10; //[10,20] secs
    const int SIZE = 21;
    char fileNam [SIZE] = "DropDistance.dat";
    out.open(fileNam);
            
    
    //calculate the number of fellow perpetrators
    
    distance = 0.5f * GRAVITY * drpTime * drpTime;
        
    //output the result
    
    cout << "Drop Time = " << drpTime << " (sec)" << endl;
    cout << fixed << setprecision(3) << showpoint; //Format to 3 decimal spaces
    cout << "Free fall distance =" << setw(9)<< distance << " (ft)" << endl;
    
    //calculate the number of fellow perpetrators
    
    distance = 0.5f * GRAVITY * pow(drpTime, 2);
        
    //output the result
    
    cout << "Free fall distance =" << setw(11)<< distance << " (ft)" << endl;
    
    //calculate the number of fellow perpetrators
    
    distance = 0.5f * GRAVITY * exp(2 * log(drpTime));
        
    //output the result
    
    cout << "Free fall distance =" << setw(11)<< distance << " (ft)" << endl;
    
    //output the result to a file
    
    out << fixed << setprecision(3) << showpoint;
    out << "Free fall distance =" << setw(11)<< distance << " (ft)" << endl;
    
    //exit stage right, make sure to close files
    out.close();
    
    return 0;
}

