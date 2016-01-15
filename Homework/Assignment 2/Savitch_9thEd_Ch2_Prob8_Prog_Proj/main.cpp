/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 1:18 PM
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

const double INTRST = (18 * .01) / 12;

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    double amnt = 1000;
    unsigned short paymnt= 50;
    double interest;
    double due;
    int counter = 1;
    double amntLft = due - paymnt;
    cout << fixed << setprecision(2);
    
    //Input data
    /*do{
        interest = amnt * INTRST;
        due = interest + amnt;
        cout << "This amount is remaining: $" << due << endl;
        amntLft = due - paymnt;
        cout << "The amount remaining on the stereo is: $" << amntLft << endl;
        amntLft = amntLft - paymnt;
        counter++;
        cout << "counter: " << counter << endl;
        cout << amntLft << endl;
    }while (amntLft > 0);*/
    
    for (amnt = amnt; amnt > 0; counter++)
    {
        interest = amnt * INTRST;
        double grossAmnt = interest + amnt;
        cout << "This is the amount due: $" << grossAmnt << endl;
        double newPay = grossAmnt - paymnt;
        cout << "This is amount after payment: $" << newPay << endl;
        amnt = newPay;
        cout << endl;
        cout << "This is the new amount: " << amnt;
        cout << endl;
        cout << "Total months payed: " << counter;
        cout << endl;
        //double totInterest = interest + interest;
        double totInterest = (interest + interest) + interest;
        cout << "This was the interest for this payment: " << interest << endl;
        int temp = interest
        temp = temp;
        interest = temp;
        cout << "Total interest payed so far: " << totInterest << endl;
        
        
    }
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right

    return 0;
}

