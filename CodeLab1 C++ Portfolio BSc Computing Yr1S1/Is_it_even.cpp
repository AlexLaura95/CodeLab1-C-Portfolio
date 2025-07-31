#include <iostream>
using namespace std;

int main() {
    int value; // Variable to hold the user input
    cout << "Enter a number: ";
    cin >> value;

    if (value % 2 == 0) {// Check if the number is even
        cout << "The provided number is even" << endl;
    } else {
        cout << "The provided number is odd" << endl;//check if the number is odd
    }

    return 0;
}