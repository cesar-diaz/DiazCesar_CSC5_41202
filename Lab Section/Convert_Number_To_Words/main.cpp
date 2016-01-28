/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on January 28, 2016, 10:52 AM
    Purpose: Convert an integer into words
 */


//system libraries
#include <iostream>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int num,n100s, n10s, n1s;
    
    
    //Input data
    cout << "Enter the num:\n";
    cin >> num;
    n100s = (num - num % 100) / 100;//Number of 100s
    num = (num - n100s * 100);//Subtract off 100s
    n10s = (num - num % 10) / 10;//Number of 10s
    n1s = (num - n10s * 10);//Subtract off 10s to get 1s
    
    //Calculate or map inputs to outputs
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
        //Need to add a case 0 and case 1
        case 0:
            cout << "";
            break;
        case 1:
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
                    cout << "Eightteen";
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
    
    //Output the results
    
    //Exit stage right

    return 0;
}

