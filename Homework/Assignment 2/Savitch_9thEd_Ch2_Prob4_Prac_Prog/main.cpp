/* 
 * File:   main.cpp
 * Author: Cesar Diaz
 * Created on January 13, 2016, 1:13 PM
 */

#include <iostream>

using namespace std;



int main(int argc, char** argv) {
    
    cout << "This is a game of Mad Lib.\n";
	cout << "Enter the following making sure to press ENTER after each.\n";
	cout << "The first or last name of your instructor.\n";
	string insNam;
	cin >> insNam;
	cout << "Your name.\n";
	string userNam;
	cin >>userNam;
	cout << "A food.\n";
	string food;
	cin >> food;
	cout << "A number between 100 and 120.\n";
	unsigned short number;
	cin >> number;
        while (number < 100 || number > 120){
            cout << "Value must be within 100-120. Try again.\n";
            cin >> number;
        }
        cout << "An adjective.\n";
	string adjective;
	cin >> adjective;
        cout << "A color.\n";
        string color;
        cin >> color;
        cout << "Finally, an animal.\n";
        string animal;
        cin >> animal;
        cout << endl << "Okay here is the story.\n";
        cout << endl << "Dear Instructor " << insNam << ",\n";
        cout << endl << "I am sorry that I am unable to turn in my homework at"
                " this time. First,\n";
        cout << "I ate a rotten " << food << ", which made me turn " << color
                << " and extremely ill. I\n";
        cout << "came down with a fever of " << number << ". Next, my "
                << adjective << " pet\n";
        cout << animal << " must have smelled the remains of the " << food
                << " on my homework,\n";
        cout << "because he ate it. I am currently rewriting my homework "
                "and hope you \n";
        cout << "will accept it late.\n";
        cout << endl << "Sincerely,\n";
        cout << userNam << endl;
        cout << endl << "End of story.";

    return 0;
}

