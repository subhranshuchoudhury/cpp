#include <iostream>
using namespace std;

class Distance {
private:
    int km, m, cm;

public:
    // Function to input values
    void input_distance(int a, int b, int c) {
        km = a;
        m = b;
        cm = c;
    }

    // Function to display the distance
    void display() {
        cout << km << " km " << m << " m " << cm << " cm\n";
    }

    // Function to add two Distance objects
    Distance add_distance(Distance d2) {
        Distance result;
        int total_cm = cm + d2.cm;
        int total_m = m + d2.m + total_cm / 100;
        int total_km = km + d2.km + total_m / 1000;

        result.cm = total_cm % 100;
        result.m = total_m % 1000;
        result.km = total_km;

        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of distance objects: ";
    cin >> n;

    Distance d[10]; // assuming max 10 objects
    int a, b, c;

    // Input distances
    for (int i = 0; i < n; i++) {
        cout << "Enter km, m, cm for object " << i << ": ";
        cin >> a >> b >> c;
        d[i].input_distance(a, b, c);
    }

    // Display all distances
    cout << "\nAll distances:\n";
    for (int i = 0; i < n; i++) {
        cout << "Object " << i << ": ";
        d[i].display();
    }

    // Choose two distances to add
    int x, y;
    cout << "\nEnter indices of two objects to add: ";
    cin >> x >> y;

    Distance result = d[x].add_distance(d[y]);

    cout << "\nResult of addition:\n";
    result.display();

    return 0;
}
