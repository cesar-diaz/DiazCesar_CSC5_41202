/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 5:29 PM
 * Purpose: Ternary Operator 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    unsigned short percent;
    cout << "Enter your percentage" << endl;
    cin >> percent;
    cout << "Using the Ternary Operator your letter grade is: " 
            << (percent > 90? 'A':
                percent >= 80? 'B':
                    percent >= 70? 'C':
                        percent >= 60? 'D':
                            percent <= 59? 'F':'F');

    return 0;
}

