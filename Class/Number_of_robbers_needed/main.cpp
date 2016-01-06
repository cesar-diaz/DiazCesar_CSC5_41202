/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 6, 2016, 10:44 AM
 */

#include <iostream>

using namespace std;

const char wtBill = 1; //weight of each bill in grams
const float cnvLbs = 1.0f / 453.5f; //conversion from grams to lbs

//Function Prototypes

int main(int argc, char** argv) {
    
    //declare variables
    
    unsigned int amtStl; //amount to steal
    unsigned short denom; //bill denomination
    unsigned char wtPers = 80; //weight person can carry
    unsigned char nPerps; //number of perpetrators
    
    //input the number of coins

    cout << "How much money would you like to aquire?" << endl;
    cin >>amtStl;
    cout << "What is the bill denomination desired?" << endl;
    cin >>denom;
    
    //calculate the number of fellow perpetrators
    
    nPerps = cnvLbs * amtStl * wtBill / denom / wtPers+1;
    
    //output the result
    
    cout << "Amount desired  = $" << amtStl << endl;
    cout << "Denomination desired  = $" << denom << endl;
    cout << "Number of individuals required on a job = " 
            << static_cast<int>(nPerps) << endl;
    
    //exit stage right
    
    return 0;
}

