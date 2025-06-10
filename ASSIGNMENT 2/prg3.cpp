#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    int metre;
    int cm;

public:
    void getData() {
        cout << "Enter distance in metres and centimetres:\n";
        cin >> metre >> cm;
    }

    void display() {
        cout << "Distance: " << metre << " metres and " << cm << " centimetres\n";
    }

    friend void add(DM, DB); // Friend function declaration
};

class DB {
    int feet;
    int inch;

public:
    void getData() {
        cout << "Enter distance in feet and inches:\n";
        cin >> feet >> inch;
    }

    void display() {
        cout << "Distance: " << feet << " feet and " << inch << " inches\n";
    }

    friend void add(DM, DB); // Friend function declaration
};

// Friend function definition
void add(DM d1, DB d2) {
    // Convert DB to cm: 1 inch = 2.54 cm, 1 foot = 12 inches
    float total_cm = d1.metre * 100 + d1.cm + (d2.feet * 12 + d2.inch) * 2.54;

    // Convert total_cm back to metres and cm
    int res_metre = total_cm / 100;
    int res_cm = (int)total_cm % 100;

    cout << "Sum in metres and centimetres: ";
    cout << res_metre << " metres and " << res_cm << " centimetres\n";
}

int main() {
    DM d1;
    DB d2;

    d1.getData();
    d2.getData();

    add(d1, d2);

    return 0;
}
