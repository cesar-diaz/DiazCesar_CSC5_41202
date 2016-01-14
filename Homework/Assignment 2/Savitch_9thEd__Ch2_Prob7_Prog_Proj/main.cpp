/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 10:08 AM
 * Purpose: Check Out IDE
 */


//system libraries

#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    //Declare and initialize variables
    double costNow;
    unsigned short years;
    double inflate;
    double costFut;
    
    //Input data
    cout << "Enter the price of the item that you want to purchase.\n";
    cout << "$";
    cin >> costNow;
    cout << "How many years form now would you like to purchase the item?\n";
    cin >> years;
    cout << "Enter the rate of inflation.\n";
    cin >> inflate;
    inflate = inflate * .01;
    costFut = (costNow * inflate) * years;
    cout << fixed << setprecision(2);
    cout << "The cost of the item in " << years << " years from now will be $"
            << costFut + costNow << endl;
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

