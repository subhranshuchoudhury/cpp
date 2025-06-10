#include <bits/stdc++.h>
using namespace std;
enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main() {
    int dayNumber;
    cout << "Enter the day number (1-7): ";
    cin >> dayNumber;
    switch (dayNumber) {
        case MONDAY: cout << "Monday" << endl; break;
        case TUESDAY: cout << "Tuesday" << endl; break;
        case WEDNESDAY: cout << "Wednesday" << endl; break;
        case THURSDAY: cout << "Thursday" << endl; break;
        case FRIDAY: cout << "Friday" << endl; break;
        case SATURDAY: cout << "Saturday" << endl; break;
        case SUNDAY: cout << "Sunday" << endl; break;
        default: 
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }
    return 0;
}