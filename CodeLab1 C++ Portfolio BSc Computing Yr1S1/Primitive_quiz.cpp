#include<iostream>
using namespace std;
int main(){
    string countries[10] = { //List of countries
        "France", "Germany", "Romania", "Spain", "Japan",
        "Canada", "Brazil", "Australia", "India", "Egypt"
    };
    string capitals[10] = { //List of capitals 
        "Paris", "Berlin", "Bucharest", "Madrid", "Tokyo",
        "Ottawa", "Brasilia", "Canberra", "NewDelhi", "Cairo"
    };

    string answer; //Variable to store user input
    cout << "Welcome to the Country capital quiz!" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "What is the capital of " << countries[i] << "?" << endl;
        cin >> answer;

        if(answer == capitals[i]) {
            cout << "Your answer is correct" << endl;
        } else {
            cout << "Your answer is incorrect. The correct answer is " << capitals[i] << endl;
        }
    }
    return 0;
}
        

   
    
    
