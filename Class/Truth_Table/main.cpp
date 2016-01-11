/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 11, 2016, 09:00 AM
 * Purpose: Display table and compare swaps
 */


//system libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    
    bool x = true;
    bool y =true;
    
    //Create heading
    
    cout << "X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y)"
            " !X||!Y !(X||Y) !X&&!Y" << endl;
    
    //First row
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "     ";
    cout << ((x^y)^y?'T':'F') << "       ";
    cout << ((x^y)^x?'T':'F') << "       ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "  " << endl;
 
    //Second row
    
    x = true; y = false;
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "     ";
    cout << ((x^y)^y?'T':'F') << "       ";
    cout << ((x^y)^x?'T':'F') << "       ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "  " << endl;
    
    //Third row
    
    x = false; y = true;
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "     ";
    cout << ((x^y)^y?'T':'F') << "       ";
    cout << ((x^y)^x?'T':'F') << "       ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "  " << endl;
    
    //Fourth row
    
    x = false; y = false;
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "     ";
    cout << ((x^y)^y?'T':'F') << "       ";
    cout << ((x^y)^x?'T':'F') << "       ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "  " << endl;
   
    //Swap using temp
    
    char a = 2;
    char b = 3;
    cout << "Swap using temp" << endl;
    cout << "Numbers before swap:" << endl;
    cout << "a = " << static_cast<int>(a) << endl;
    cout << "b = " << static_cast<int>(b) <<endl;
    cout << "Numbers after swap:" << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a = " << static_cast<int>(a) << endl;
    cout << "b = " << static_cast<int>(b) <<endl;
    
    //Swap using exclusive or operator
   
    cout << "Swap using operators" << endl;
    cout << "Numbers before swap:" << endl;
    cout << "a = " << static_cast<int>(a) << endl;
    cout << "b = " << static_cast<int>(b) << endl;
    cout << "Numbers after swap" << endl;
    a = a^b;
    b = a^b;
    a = a^ b;
    cout << "a = " << static_cast<int>(a) << endl;
    cout << "b = " << static_cast<int>(b) << endl;
    
    //Exit stage right

    return 0;
}

