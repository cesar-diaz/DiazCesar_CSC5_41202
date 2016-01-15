/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 8:04 AM
 * Purpose: Find money owed to employees on 6 months of pay increase
 */

#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    cout << fixed << setprecision(2);
    
    const double payInc = 7.6 * .01;
    unsigned int salary;
    
    cout << "Enter your salary.\n";
    cin >> salary;
    salary = salary / 12;
    double monOwe = (salary * payInc) * 6;
    cout << "The money owed to you is " << monOwe << ".\n";
    cout << "Your new annual salary is " << (salary * 12) + monOwe << ".\n";
    cout << "Your new monthly salary is " << salary + (monOwe / 6);
    
    
    
    return 0;
}

