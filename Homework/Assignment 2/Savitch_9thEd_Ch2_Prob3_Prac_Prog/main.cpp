/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 12, 2016, 9:44 PM
 * Purpose: How many minutes and seconds would it take to run a mile going at 
 * an input speed
 */

#include <iostream>

using namespace std;

const short SEC_PER_HR = 3600;//Number of seconds in an hour
  
int main(int argc, char** argv) {
    
    float miles;//Used double so that the input for miles can be decimals
    //Prompt the user to enter the desired MPH
    cout << "Enter the number of miles you would like to run in an hour\n";
    cin >> miles;
    int secs = SEC_PER_HR / miles;//Seconds it would take to run each mile
    int mins;
    while (secs >=  60)
    {
        secs = secs - 60;
        mins = mins + 1;
    } 
    cout << "You would have to run each mile in " << mins << " minutes and " << secs
                << " seconds to run " << miles << " MPH\n";
    
    return 0;
}

