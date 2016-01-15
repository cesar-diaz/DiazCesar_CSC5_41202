/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 9:10 AM
 * Purpose: Calculate amount withheld from check after taxes and other expenses 
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

const double PAY_RATE = 16.78;
const double SOC_SEC = 6 * .01;
const double FED_TAX = 14 * .01;
const double ST_TAX = 5 * .01;
const unsigned short UNION = 10;
const unsigned short THREE_MORE = 35;  

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short hours;
    unsigned short depend;
    unsigned short overTim;
    double grossPay;
    
    //Input data
    cout << fixed << setprecision(2);
    cout << "How many hours did you work this week\n";
    cin >> hours;
    cout << "How many dependents do you have?\n";
    cin >> depend;
    
    //Output the results
    if (hours <= 40){
        grossPay = hours * PAY_RATE;
        cout << "Your gross pay is: $" << grossPay << ".\n";
        cout << "Amount held for Social Security: $" << grossPay * SOC_SEC
                << endl;
        cout << "Amount held for federal tax: $" << grossPay * FED_TAX
                << endl;
        cout << "Amount held for state tax: $" << grossPay * ST_TAX
                << endl;
        cout << "Amount held for Union: $" << UNION << endl;
        if (depend >= 3){
            cout << "Amount held for 3 or more dependents: $" << THREE_MORE
                    << endl;
            cout << "Your net pay is " << grossPay - ((grossPay * SOC_SEC) + 
                    (grossPay * FED_TAX) + (grossPay * ST_TAX) + UNION);
        }else{
            cout << "Your net pay is " << grossPay - ((grossPay * SOC_SEC) + 
                    (grossPay * FED_TAX) + (grossPay * ST_TAX));
        }
    }else if (hours > 40){
        overTim = hours - 40;
        grossPay = (hours - overTim) * PAY_RATE;
        double ovrPay = grossPay + (overTim * PAY_RATE);
        cout << "Your gross pay is: $" << ovrPay << ".\n";
        cout << "Amount held for Social Security: $" << ovrPay * SOC_SEC
                << endl;
        cout << "Amount held for federal tax: $" << ovrPay * FED_TAX
                << endl;
        cout << "Amount held for state tax: $" << ovrPay * ST_TAX
                << endl;
        cout << "Amount held for Union: $" << UNION << endl;
        if (depend >= 3){
            cout << "Amount held for 3 or more dependents: $" << THREE_MORE
                    << endl;
            cout << "Your net pay is " << ovrPay - ((ovrPay * SOC_SEC) + 
                    (ovrPay * FED_TAX) + (ovrPay * ST_TAX) + UNION);
        }else{
            cout << "Your net pay is " << ovrPay - ((ovrPay * SOC_SEC) + 
                    (ovrPay * FED_TAX) + (ovrPay * ST_TAX));
        }
    }else{
        cout << "hi";
    }
    
    //Exit stage right

    return 0;
}

