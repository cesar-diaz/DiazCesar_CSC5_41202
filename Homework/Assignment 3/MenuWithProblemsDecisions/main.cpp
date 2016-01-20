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
#include <ctime>
#include <cstdlib>

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
        cout << "Type 1 to Display Problem Savitch 8th Ed Chap 3 Prob 10\n";
        cout << "Type 2 to Display Problem Savitch 8th Ed Chap 3 Prob 11\n";
        cout << "Type 3 to Display Problem Savitch 9th Ed Chap 3 Prob 1\n";
        cout << "Type anything else to exit\n";
        cin >> nSolutn;
        
        //Solutions to all the problems
        switch (nSolutn){
            case 1:{
                
                //The Problem to Solve
                cout << endl << "Solution to Savitch 8th Ed Chap 3 Prob 10\n";
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
                cout << endl << "Solution to Savitch 8th Ed Chap 3 Prob 11\n";
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
                cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 1.\n";
                cout << endl << "The Rock-Paper-Scissors Game.\n" << endl;

                //Set the random number seed
                srand (static_cast<unsigned int>(time(0)));
                char questn;//Question, does player want to keep playing

                //Loop until player wants to quit
                do{

                    //Declare and initialize variables
                    char computr;//The computers play
                    char player;//The players move

                    //Input the players move
                    do{
                        cout << endl << "What is your move R,P,S?\n";
                        cin >> player;
                        player = toupper (player);
                    }while(!(player == 'P' || player == 'R' || player == 'S'));

                    //Computer generated play
                    do{
                        computr = rand() % 4 + 80;
                    }while (computr == 'Q');

                    //Output the moves by the computer and player
                    cout << "The computer played " << computr << endl;
                    cout << "The Players move " << player << endl;

                    //Determine the result
                    if (computr == player){
                        cout << "The result is tie.\n";
                    }else if (player == 'P' && computr == 'R'){
                        cout << "The player wins!\n";
                    }else if (player == 'R' && computr == 'S'){
                        cout << "The player wins!\n";
                    }else if (player == 'S' && computr == 'P'){
                        cout << "The player wins!\n";
                    }else{
                        cout << "The player loses!\n";
                    }

                    //Keep Playing?
                    cout << endl << "Do you want to continue playing?\n";
                    cin >> questn;
                    cout << endl;
                }while (toupper(questn) == 'Y');
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            }
            case 7:{
                break;
            }
            case 8:{
                break;
            }
            case 9:{
                break;
            }
            case 10:{
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

