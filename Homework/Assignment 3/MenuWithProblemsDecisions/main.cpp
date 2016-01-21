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

//Global Constants
const float PI = 4 * atan(1);

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
        cout << "Type 4 to Display Problem Savitch 9th Ed Chap 3 Prob 5\n";
        cout << "Type 5 to Display Problem Savitch 9th Ed Chap 3 Prob 8\n";
        cout << "Type 6 to Display Problem Savitch 9th Ed Chap 3 Prob 6\n";
        cout << "Type 7 to Display Problem Savitch 9th Ed Chap 3 Prob 7\n";
        cout << "Type 8 to Display Problem Savitch 9th Ed Chap 3 Prob 10\n";
        
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
                //The problem to solve
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
                //The problem to solve
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
            //The Problem to Solve
            cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 5 "
                    "Practice Programs\n";
            cout << endl << "Prime numbers from 3-100\n" << endl;

            //Declare and initialize variables
            int num, i, count, n = 100;

            //Output or calculate the output required	
            for(num = 3; num <= n; num++){
                 count = 0;
                 for(i = 2; i <= num / 2; i++){
                     if(num % i == 0){
                         count++;
                         break;
                     }
                }
                 if(count == 0 && num != 1)
                      cout << setw(3) << num;
            }
            cout << endl << endl;
                break;
            }
            case 5:{
            //The problem to solve
            cout << endl << "Solution to Savitch 9thEd Chap3 Prob8" << endl;
            cout << endl << "The finite sum for PI" << endl << endl;

            //Declare and initialize variables for apprxPI
            float apprxPI = 1;    //Approximate value of PI to start
            unsigned int nTerms;//Number of terms to limit sum of PI
            char sign = -1;       //Alternating sign of the PI sequence

            //Input the number of terms in the sequence
            cout << "Input number of Terms to approximate PI"<< endl;
            cin >> nTerms;

            //Approximate PI/4
            for(int i=2, j=3; i<=nTerms; i++, j+=2){
                apprxPI += (sign / static_cast<float>(j));
                sign *= -1;
            }
            apprxPI *= 4;//Multiply by 4 once to approximate PI

            //Output the results
            cout<< "The exact  value of PI = " << PI << endl;
            cout<< "The number of terms it took to approx PI = " << nTerms << endl;
            cout<< "The approx value of PI = " << apprxPI << endl << endl;
                break;
            }
            case 6:{    
            //The Problem to Solve
            cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 6\n";
            cout << endl << "Buoyancy of a sphere.\n" << endl;

            //Find the volume of the sphere
            int rad;
            int wtOfSph;
            float volume;
            float totVolu;

            //Input radius and weight of the sphere
            cout << fixed << setprecision(2);
            cout << "Enter the radius of your sphere in feet?\n";
            cin >> rad;
            cout << "What is the weight of the sphere in lbs?\n";
            cin >> wtOfSph;
            volume = (4/3.0) * PI * pow(rad,3);
            cout << "The volume of your sphere is " << volume << endl;

            //Find the buoyant force
            float force;
            float wtOfWtr = 62.4f;

            force =  volume * wtOfWtr;
            cout << "The buoyant force of the sphere = " << force << endl;

            //Calculate and output the results
            if (force >= wtOfSph){
                cout << "This sphere should float on water.\n";
                cout << endl;
            }else{
                cout << "This sphere is too heavy to float on water.\n";
                cout << endl;
            }
                break;
            }
            case 7:{  
            //The Problem to Solve
            cout << endl << "Solution to Savitch 9th Ed Chap 3 Prob 7\n";
            cout << endl << "Convert Celsius to Fahrenheit until equal\n" << endl;

            //Declare and Initialize variables
            int ctemp = 101;//Temperature to be input in celsius
            float ftemp;//Temperature of celsius converted to fahrenheit
            cout << fixed << setprecision(2); 

            //Conversion from Celsius to Fahrenheit
            do{
                ctemp--;
                ftemp = ((9 * static_cast<float>(ctemp)) / 5) + 32;
            }while(ctemp != ftemp);

            //Output the results
            cout << "These two temperatures are equal when:\n";
            cout << "Celsius = " << ctemp << endl;
            cout << "Fahrenheit = " << ftemp << endl << endl;
                break;
            }
            case 8:{
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
            cout << endl << "In order to maintain your bodyweight of\n";
            cout << weight << " pounds by eating only candy bars,\n";
            cout << "you would need to eat " << ((bmr * perc) + bmr) / 230 << " candy\n"
                    "bars per day.\n" << endl;
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

