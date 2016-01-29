/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 4, 2016, 10:18 AM
    Purpose: Check Out IDE
 */


//system libraries
#include <iostream>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    char pack;
    unsigned short hours;
    const float PRICE_A = 16.85f;
    const float PRICE_B = 23.85f;
    const float PRICE_C = 29.55f;
    float monthly1, monthly2, monthly3;
    
    //Input data
    cout << "What package would you like?\n";
    cin >> pack;
    cout << "How many hours are you using your ISP?\n";
    cin >> hours;
    
    switch(toupper(pack)){
        case 'A':
            if (hours <= 5){
                cout << "Your monthly bill for package A is $" << PRICE_A 
                        << endl;
            }else if (hours > 5 && hours < 20){
                float eHours = hours - 5;
                eHours *= .80f;
                monthly1 = eHours + PRICE_A;
                cout << "Your monthly bill for package A is $" << monthly1 
                        << endl;
            }else{
                unsigned short eHours = hours - 5;
                unsigned short eHours1 = eHours - 15;
                monthly1 = eHours1 * 1.00f;
                monthly1 += (.80f * 15);
                monthly1 += PRICE_A;
                cout << "Your monthly bill for package A is $" << monthly1 
                        << endl;
            }
            break;
            
        case 'B':
            if (hours <= 15){
                cout << "Your monthly bill for package B is $" << PRICE_B 
                        << endl;
            }else if (hours > 15 && hours < 25){
                float eHours = hours - 15;
                eHours *= .65f;
                monthly2 = eHours + PRICE_B;
                cout << "Your monthly bill for package B is $" << monthly2 
                        << endl;
            }else{
                unsigned short eHours = hours - 15;
                unsigned short eHours1 = eHours - 10;
                monthly2 = eHours1 * .70f;
                monthly2 += (.65 * 10);
                monthly2 += PRICE_B;
                cout << "Your monthly bill for package B is $" << monthly2 
                        << endl;
            }
            break;
            
        default:
            cout << "Hi";
            
    }
    cout << monthly1 << endl;
    cout << monthly2 << endl;
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

