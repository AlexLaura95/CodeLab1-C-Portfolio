#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int attempts = 0;
    const string password = "12345";//set a password for the code

    while (attempts < 5) {//Alow up to 5 attempts
        cout << "Enter password: ";
        cin >> input;

        if (input == password) { //Check if the input is correct
            cout << "Welcome to the Secure Area" << endl;
            break;// If the answer is corect, exit the loop

        } else {// If the input is incorrect 
            attempts++;
            cout << "Incorrect password. Attempts left: " << (5 - attempts) << endl;
        }
    }

    if (attempts == 5) {//if the user has used all attempts
        cout << "Too many failed attempts. Authorities have been alerted!" << endl;
    }

    return 0;
}