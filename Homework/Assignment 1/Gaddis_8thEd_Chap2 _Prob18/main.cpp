/* 
 * File:   main.cpp
 * Author: Cesar
 *
 * Created on January 6, 2016, 8:35 AM
 */

#include <iostream>

using namespace std;

//Global Constant
const char cnvPerc = 100; //conversion to percentage

//Function prototype

//Execution begins here

int main(int argc, char** argv) {

    //declare or initialize variables
    unsigned short cstSrvy = 16500; //customers surveyed 
    unsigned char peDrnk = 15; //percentage surveyed energy drinkers, 1+ per week
    unsigned char pcDrnk = 58; //percentage surveyed energy citrus drinkers
    unsigned short neDrnk, ncDrnk; //number of energy and citrus drinkers
    
    //calculate the number of drinkers
    neDrnk = cstSrvy * peDrnk / cnvPerc;
    ncDrnk = neDrnk * pcDrnk / cnvPerc;
    
    //output the results
    
    cout << "Number of Customers Surveyed = " << cstSrvy << endl;
    cout << "Percentage of Energy Drinkers = " << static_cast<int>(peDrnk) 
            << "%" << endl;
    cout << "Percentage of Energy Drinkers = " << static_cast<int>(pcDrnk)
            << "%" << endl;
    cout << "Number of Energy Drinkers (1+ per week) = " << neDrnk << endl;
    cout << "Number of Energy Citrus Drinkers = " << ncDrnk << endl;
    
    //exit stage right
    
    return 0;
}

