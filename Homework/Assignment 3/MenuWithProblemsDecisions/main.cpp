/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 19, 2016, 8:32 AM
 * Purpose: Menu
 */


//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short nSolutn;     //Problem solution to display
    bool reDspl = true;         //Exit program when false
    
   
    
    //Menu to Display Solution
    do{
         //Input problem to display, i.e. menu
        cout << "Assignment 3 Problem Set\n";
        cout << "Type 1 to Display Problem Savitch 8thEd Chap3 Prob10\n";
        cout << "Type 2 to Display Problem Savitch 8thEd Chap3 Prob11\n";
        cout << "Type 3 to Display Problem 3\n";
        cout << "Type anything else to exit\n";
        cin >> nSolutn;
        
        //Solutions to all the problems
        switch (nSolutn){
            case 1:{
                
                //The Problem to Solve
                cout << endl << "Solution to Savitch 8thEd Chap3 Prob10\n";
                cout << endl << "The Fibonacci Sequence\n" << endl;

                //Declare Variables
                unsigned int fi, fim1, fim2; //Designation it the sequence
                unsigned short nTerms;       //Number of terms in the sequence
                unsigned short counter;      //Current position in sequence
                const char D_REPRO = 5;           //Days to reproduce
                float crudWt;                //Weight of crud
                unsigned int nDays;          //Number of days to grow crud

                //Initialize the sequence
                fim2 = fim1 = 1; //Start the sequence
                counter = 2;     //Initialize the counter

                //Input the number of terms in the sequence
                cout << "Input the initial weight of the crud in Lbs.\n";
                cin >> crudWt;
                cout << "How many days will the crud be allowed to grow?\n";
                cin >> nDays;

                //Calculate the number of terms
                nTerms = nDays / D_REPRO + 1;

                //Output or calculate the output required
                if (nTerms == 1){
                    cout << "After " << nDays << " days the crud weighs " 
                            << fi*crudWt << " lbs\n" << endl;
                }else if (nTerms == 2){
                    cout << "After " << nDays << " days the crud weighs " 
                            << fi*crudWt << " lbs\n" << endl;
                }else{
                    do{
                       fi = fim1 + fim2;
                        counter++;
                        fim2 = fim1;
                        fim1 = fi;
                    }while (counter < nTerms); 
                    cout << "After " << nDays << " days the crud weighs " 
                            << fi*crudWt << " lbs\n" << endl;
                }
                break;
            }
            case 2:{
                cout << endl << "Solution to Savitch 8thEd Chap3 Prob11\n";
                cout << endl << "The Finite sum for e^x\n" << endl;

                //Declare and initialize variables for e^x
                const unsigned char N_TERMS = 13;
                float etox = 1, x;//e^x

                //Input the value x
                cout << "Input x of e^x computation\n";
                cin >> x;

                //Calculate e^x
                for (int n = 1; n <= N_TERMS; n++){
                    //Declare and initialize variables
                    unsigned int factN = 1;//N and N factorial

                    //Calculate the factorial
                    for (int i = 1; i <= n; i++){
                        factN*= i;
                    }

                    //Calculate e^x with the above factorial
                    etox += pow (x,n) / factN;
                }

                //Output the results
                cout << "The exact value of e^" << x << " = " << exp(x) << endl;
                cout << "The approx value of e^" << x << " = " << etox << endl 
                        << endl;
                break;
            }
            case 3:{
                cout << endl << "Solution to Problem 3\n" << endl;
                break;
            }
            default:{
                cout << "Exiting the Program\n";
                reDspl = false;
            }
        }
    }while (reDspl);
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    

    return 0;
}

