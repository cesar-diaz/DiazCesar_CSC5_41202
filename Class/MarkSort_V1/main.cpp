/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 2, 2016, 8:54 AM
    Purpose: To develop a sorting routine called Mark Sort
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
void swap(int &, int &);
void lstSml(int [], int, int);
void markSrt(int [], int);

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
    markSrt(array, SIZE);
    
    //Print the array
    prntAry(array, SIZE, 10);

    //Exit stage right

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Mark Sort
//Input:
//a->Array or List
//n->Size of List
//Outputs:
//a->Sorted Array
/******************************************************************************/
void markSrt(int a[], int n){
    //Find smallest in each successive list
    //From the beginning of the list to the end
    for (int i = 0; i < n - 1; i++){
        lstSml(a, n, i);
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Smallest in List
//Input:
//a->Array or List
//n->Size of List
//pos->To Place Smallest in List that Follows
//Outputs:
//a[pos]->Smallest Element in [a[pos], a[n - 1]]
/******************************************************************************/
void lstSml(int a[], int n, int pos){
    //Loop and compare
    for (int i = pos + 1; i < n; i++){
        if (a[pos] > a [i]){
            swap(a[pos], a[i]);
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Swap Variables
//Input:
//a->First Variable
//n->Second Variable
//Outputs:
//a->First Variable w/value of b
//n->Second Variable w/value of a
//a->Printed list
/******************************************************************************/
void swap(int &a, int &b){
    a = a^b;//Exclusive or XOR
    b = a^b;//Exclusive or XOR b = a
    a = a^b;//Exclusive or XOR a = b
    
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

