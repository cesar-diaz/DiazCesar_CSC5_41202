/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 6:00 PM
 * Purpose: Dependent If 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    unsigned short percent;
    cout << "Enter your percentage" << endl;
    cin >> percent;
    if (percent >= 90)
    {
        cout << "Your letter grade using Dependent If is an A" << endl;
    }
        else if (percent >= 80 && percent <= 89)
        {
            cout << "Your letter grade using Dependent If is a B" << endl;
        }
            else if (percent >= 70 && percent <= 79)
            {
                cout << "Your letter grade using Dependent If is a C" << endl;
            }
                else if (percent >= 60 && percent <= 69)
                {
                    cout << "Your letter grade using Dependent If is a D" 
                            << endl;
                }
                    else
                    {
                        cout << "Your letter grade using Dependent If is a F"
                                << endl;
                    }
                
            
        
    

    return 0;
}

