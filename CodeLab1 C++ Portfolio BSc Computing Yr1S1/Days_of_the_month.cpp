#include<iostream>
using namespace std;
int main(){ //this program shows the number of days in a month
    int month;//variable to store the month number
    cout << "Enter the month to find number of day in month: " << endl;//prompt user for input
    cin >> month;

    switch(month) {//switch statment to determine the number of days
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;//months with 31 days
            break;
            case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;//months with 30 days
            break;
            case 2:
            cout << "28 or 29 days" << endl;//February have just 28 days 
            break;
            default:
            cout << "Invalid month" << endl; //if the input is invalid
            break;

}  
    return 0;

}