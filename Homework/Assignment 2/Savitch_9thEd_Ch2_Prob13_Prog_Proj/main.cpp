/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 3:46 PM
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short int weight;
    unsigned height;
    unsigned short years;
    char gender;
    double bmr;
    
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
    cout << "you would need to eat " << bmr / 230 << " candy\n"
            "bars per day.\n";
    
    //Exit stage right

    return 0;
}

