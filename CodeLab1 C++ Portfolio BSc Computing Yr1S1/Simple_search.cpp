#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchName;
    bool found = false; // Variable to track if the name is found

    // Prompt user for search term
    cout << "Enter a name to search for: ";
    cin >> searchName;//Read user input

    // Loop through the array to search for the name
    for (int i = 0; i < 6; i++) {// Assuming the array size is known
        if (names[i] == searchName) {
            found = true;
            cout << searchName << " found in the array at index " << i << "." << endl;
            break; // Exit the loop if name is found
        }
    }
// If not found after checking all elements
    if (!found) {
        cout << searchName << " not found in the array." << endl;
    }

    return 0;
}