/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 5:45 PM
 * Purpose: Independent If
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    unsigned short percent;
    cout << "Enter your percentage" << endl;
    cin >> percent;
    
    if (percent >= 90)
    {
        cout << "Your grade using an Independent If is an A" << endl;
    }
    if (percent >= 80 && percent <= 89)
    {
        cout << "Your grade using an Independent If is a B" << endl;
    }
    if (percent >= 70 && percent <= 79)
    {
        cout << "Your grade using an Independent If is a C" << endl;
    }
    if (percent >= 60 && percent <= 69)
    {
        cout << "Your grade using an Independent If is a D" << endl;
    }
    if (percent <= 59)
    {
        cout << "Your grade using an Independent If is a F" << endl;
    }

    return 0;
}

