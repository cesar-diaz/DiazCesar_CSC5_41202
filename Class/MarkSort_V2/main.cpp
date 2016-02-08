/* 
    File:   main.cpp
    Author: Cesar Diaz
    Created on February 2, 2016, 8:54 AM
    Purpose: To develop a sorting routine called Mark Sort
             Place in 1 function
 */


//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Random Function
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void fillAry(int [], int);
void prntAry(int [], int, int);
void swap(int &, int &);
void lstSml(int [], int, int);
void markSrt(int[], int); 

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const int SIZE = 100;
    int array[SIZE];
    
    //Fill the array with random 2 digit numbers
    fillAry(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test finding the smallest element in the list
    markSrt(array, SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Mark Sort
//Inputs
// a->Array/List
// n->Size of List
// pos->To place smallest in list that follows
//Outputs
// a[pos]->smallest element in [a[pos],a[n-1]]
//******************************************************************************
void markSrt(int a[], int n){
    //Outside Element of the List
    for(int i = 0; i < n - 1; i++){
        //Inside list above the element
        for(int j = i + 1; j < n; j++){
            //swap
            if(a[i] > a[j]){
                if(a[j] > a[i]){ 
                    a[j] = a[j]^a[i];
                    a[i] = a[j]^a[i];
                    a[j] = a[j]^a[i];//Exclusive or XOR
                }
            }
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Print Array
//Inputs
// a->List
// n->Size of the array
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
void prntAry(int a[], int n, int perLine){
    //loop and fill the array with random numbers 
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
        if(i % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Fill Array
//Inputs
// a->List
// n->Size of the array
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
void fillAry(int a[], int n){
    //loop and fill the array with random numbers 
    for(int i = 0; i < n; i++){
        a[i] = rand() % 90 + 10;//[10,99]
    }
}