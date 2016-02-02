/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 2, 2016, 8:54 AM
    Purpose: To develop a sorting routine called Bubble Sort
 */


//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes 
void fillAry(int [], int);
void prntAry(int [], int, int);
void bublSrt(int [], int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE = 100;
    int array[SIZE];
    
    //Fill the array w/random 2 digit numbers
    fillAry(array, SIZE);
    
    //Print the array
    prntAry(array, SIZE, 10);
    
    //Test finding the smallest element in the list
    bublSrt(array, SIZE);
    
    //Print the array
    prntAry(array, SIZE, 10);

    //Exit stage right

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Bubble Sort
//Input:
//a->Array or List
//n->Size of List
//Outputs:
//a->Sorted Array
/******************************************************************************/
void bublSrt(int a[], int n){
    //Outside loop to test if any swaps happen
    bool swap;
    do{
        swap = false;
        //Inside list above the Element
        for (int j = 0; j < n - 1; j++){
            //Swap
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;//Exclusive or XOR a = b
                swap = true;
            }
        }   
    }while(swap);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Print Array
//Input:
//a->List
//n->Size of the array
//perLine->How many list elements per line to print
//Outputs:
//a->Printed list
/******************************************************************************/
void prntAry(int a[], int n, int perLine){
    //Loop and fill the array w/ random numbers
    cout << endl;
    for (int i = 0; i < n; i++){
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
void fillAry(int a[], int n){
    //Loop and fill the array w/ random numbers
    for (int i = 0; i < n; i++){
        a[i] = rand() % 90 + 10;//[10,99]
    }
}