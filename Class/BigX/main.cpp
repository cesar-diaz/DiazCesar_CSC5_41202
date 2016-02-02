/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 2, 2016, 8:54 AM
    Purpose: How big of an X do you want to print
 */


//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Constants
const int COL = 50;

//Function Prototypes 
int fillAry1(char [][COL], int);
int fillAry2(char [][COL], int);
void prntAry(char [][COL], int);
void allNOne();

//Execution Begins Here

int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int ROW = 50;
    char array[ROW][COL];
    
    //Fill the array w/random 2 digit numbers
    int row_col = fillAry1(array, ROW);
    
    //Print the array
    prntAry(array, ROW, row_col);
    

    //Exit stage right

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Print Array
//Input:
//a->A 2 dimensional array
//ROW->Number of rows in the array
//COL->Number of columns in the array
//Outputs:
//a->List
/******************************************************************************/
void prntAry(char a[][COL], int ROW, int rc){
    //Loop and fill the array w/ random numbers
    cout << endl;
    for (int row = 0; row < rc; row++){
        cout << a[i] << " ";
        if (i % perLine == (perLine - 1)){
            cout << endl;
        }
    }
    cout << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Fill Array
//Input:
//a->List
//n->Size of the array
//Outputs:
//a->List initialized w/random numbers
/******************************************************************************/
int fillAry1(char a[][COL], int ROW){
    //Randomly choose how many rows and columns
    int row_col = rand() % 49 + 2;//[2,50]
    //Fill the entire table w/spaces
    for (int row = 0; row < ROW; row++){
        for(int col = 0; col < COL; col++){
            a[row][col] = ' ';
        }
    }
    //Fill the back slash part of X
    for (int row = 0; row < row_col; row++){
        for(int col = 0; col < row_col; col++){
            if (row == col){
                a[row][col] = (row_col - row) + 48;
            }
        }
    }
    //Fill the forward slash part of X
    for (int row = 0; row < row_col; row++){
        for(int col = 0; col < row_col; col++){
            if ((row + col) == (row_col - 1)){
                a[row][col] = (row + 1);
            }
        }
    }
    //Send back how many cells are occupied
    return row_col;
}

