/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 20, 2016, 10:48 PM
 * Purpose: Find how many candy bars one would have to eat to maintain weight.
 * Different for male and female
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    //The problem to solve
    cout << endl << "Solution to Savitch 9thEd Chap3 Prob10" << endl;
    cout << endl << "Candy Bars needed to maintain weight" << endl << endl;
    
    //Declare and initialize variables
    unsigned short int weight;
    unsigned height;
    unsigned short years;
    char gender;
    double bmr;
    char activ;
    float perc;//Percentage to increase based on activity level
    
    //Input data
    cout << "Enter your weight in pounds.\n";
    cin >> weight;
    cout << "Enter your height in inches.\n";
    cin >> height;
    cout << "Enter your age.\n";
    cin >> years;
    cout << "Are you male or female? M or F.\n";
    cin >> gender;
    cout << fixed << setprecision(2);
    
    while (gender != 'M' && gender != 'F'){
        cout << "Your entry was invalid.\n";
        cout << "Please enter F for female and M "
                "for male.\n";
        cin >> gender;
    }
    
    cout << "How is your activity level?\n";
    do{
    cout << "Enter 'S' for \"Sedentary\" 'SA' for \"Somewhat active\" "
            "'A' for \"Active\" and 'HA' for \"Highly Active\"\n";
    cin >> activ;
    }while (activ != 'S' && activ != 'SA' && activ != 'A' && activ != 'HA');
    
    cout << fixed << setprecision(2);
    
    switch (activ){
        case 'S':{
            perc = .20;
        }
            break;
        case 'SA':{
            perc = .30;
        }
            break;
        case 'A':{
            perc = .40;
        }
            break;
        case 'HA':{
            perc = .50;
        }
            break;
    }
    
    //Calculate or map inputs to outputs
    switch (gender){
        case 'F':
            bmr = 665 + (4.3 * weight) + (4.7 * height) - (4.7 * years);
            break;
        case 'M':
            bmr = 66 + (6.3 * weight) + (12.9 * height) - 
            (6.8 * years);
            break;
    }
    
    //Output the results
    cout << "In order to maintain your bodyweight of\n";
    cout << weight << " pounds by eating only candy bars,\n";
    cout << "you would need to eat " << ((bmr * perc) + bmr) / 230 << " candy\n"
            "bars per day.\n";
    
    //Exit stage right

    return 0;
}

