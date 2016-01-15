/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 2:43 PM
 * Purpose: How many gallons of water are inside a cylindrical well
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14;
const double GAL_IN_FT = 7.48;

int main(int argc, char** argv) {
    
    double rad;
    double depth;
    double cubeFt;
    cout << fixed << setprecision(2);
    
    cout << "Enter the radius of the well casing in inches.\n";
    cin >> rad;
    double radFt = rad / 12;
    cout << "Enter the depth of the well in feet.\n";
    cin >> depth;
    cout << endl;
    cubeFt = PI * pow(radFt,2) * depth;
    cout << "There are " << cubeFt << " cubic ft. in this well\n";
    double galInWl = cubeFt * GAL_IN_FT;
    cout << fixed << setprecision(0);
    
    if (galInWl > 250){
        cout << "A " << depth << "-foot-well full of water with a radius of "
                << rad << " inches for the\n";
        cout << "casing holds about " << galInWl << " gallons of water--plenty "
                "for a family of four and\n";
        cout << "no need to install a separate holding tank.\n";
    }else{
        unsigned short galNeed = 250 - galInWl;
        cout << "A " << depth << "-foot-well full of water with a radius of "
                << rad << " inches for the\n";
        cout << "casing holds about " << galInWl << " gallons of water "
                "not enough for a family of four and you\n";
        cout << "may need to install a separate holding tank "
                "that can hold at least " << galNeed << " gallons more.\n";
    }

    return 0;
}

