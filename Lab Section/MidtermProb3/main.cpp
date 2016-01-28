/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 28, 2016, 1:10 PM
    Purpose:
 */


//system libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    string pfName, plName;//First and last name of the payee
    string fName, lName;//First and last name of account holder
    string date;
    unsigned int amnt;
    int n100s, n10s, n1s;
    
    //Input data
    cout << "Check Writing Program\n";
    cout << "Input the following 4 values\n";
    cout << "Date:           ";
    cin >> date;
    cout << "Payee:          ";
    cin >> pfName >> plName;
    cout << "Amount:         $";
    cin >> amnt;
    cout << "Account Holder: ";
    cin >> fName >> lName;
    
    //Output a Written Check
    cout << endl;
    cout << fName << " " << lName << endl;
    cout << "STREET ADDRESS\n";
    cout << "CITY, STATE ZIP" << setw(40) << "Date: " <<setw(10)<< date 
            << endl << endl;
    cout << "Pay to the Order of: " << pfName << " " << plName;
    cout << setw(24) << "$" << amnt << ".00" << endl << endl;
    
    //Takes the amount and seperates it into 100s, 10s, and 1s
    n100s = (amnt - amnt % 100) / 100;//Number of 100s
    amnt = (amnt - n100s * 100);//Subtract off 100s
    n10s = (amnt - amnt % 10) / 10;//Number of 10s
    n1s = (amnt - n10s * 10);//Subtract off 10s to get 1s
    //Convert the interger "amnt" into a word
    //Switch for the hundreds spot
    switch (n100s){
        case 0:
            cout << "";
            break;
        case 1:
            cout << "One Hundred and ";
            break;
        case 2:
            cout << "Two Hundred and ";
            break;
        case 3:
            cout << "Three Hundred and ";
            break;
        case 4:
            cout << "Four Hundred and ";
            break;
        case 5:
            cout << "Five Hundred and ";
            break;
        case 6:
            cout << "Six Hundred and ";
            break;
        case 7:
            cout << "Seven Hundred and ";
            break;
        case 8:
            cout << "Eight Hundred and ";
            break;
        case 9:
            cout << "Nine Hundred and ";
            break;  
        default:
            cout << "Error";
    }
    
    //Swith for the tens spot
    switch (n10s){
        case 0:
            cout << "";
            break;
        case 1://Case one for the 10s can be either ten, twelve, eleven , or teens
            switch(n1s){
                case 0:
                    cout << "Ten";
                    break;
                case 1: 
                    cout << "Eleven";
                    break;
                case 2:
                    cout << "Twelve";
                    break;
                case 3:
                    cout << "Thirteen";
                    break;
                case 4:
                    cout << "Fourteen";
                    break;
                case 5:
                    cout << "Fifteen";
                    break;
                case 6:
                    cout << "Sixteen";
                    break;
                case 7:
                    cout << "Seventeen";
                    break;
                case 8:
                    cout << "Eighteen";
                    break;
                case 9:
                    cout << "Nineteen";
                    break; 
                default:
                    cout << "Error";
            }
            break;
        case 2:
            cout << "Twenty ";
            break;
        case 3:
            cout << "Thirty ";
            break;
        case 4:
            cout << "Forty ";
            break;
        case 5:
            cout << "Fifty ";
            break;
        case 6:
            cout << "Sixty ";
            break;
        case 7:
            cout << "Seventy ";
            break;
        case 8:
            cout << "Eighty ";
            break;
        case 9:
            cout << "Ninety ";
            break;
        default:
            cout << "Error";
    }
    
    //Switch for the ones spot
    if (n10s == 1){
        cout << "";
    }else{
        
        switch (n1s){
            case 0:
                cout << "";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;    
        }
    }
    cout << " and no/100s Dollars" << endl << endl;
    cout << "BANK OF CSC5" << endl << endl;
    cout << "FOR: GOTTA PAY RENT" << setw(36) << fName << " " << lName << endl;
    
    //Output the results
    
    //Exit stage right

    return 0;
}

