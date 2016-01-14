/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 14, 2016, 8:32 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned short maxCap;
    unsigned short attend;
    
    cout << "Enter the max capacity of the room.\n";
    cin >> maxCap;
    cout << "How many people will be attending the meeting?\n";
    cin >> attend;
    if (maxCap < attend){
        cout << "The meeting cannot be held as planned due to fire "
                "regulations.\n";
        unsigned short exclude = attend - maxCap;
        cout << "In order to meet fire regulations " << exclude 
                << " people must be excluded.\n";
    }else{
        cout << "It is safe to hold the meeting in this room\n";
    }
    
    

    return 0;
}

