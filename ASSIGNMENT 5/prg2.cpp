#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data() {
        cin >> x >> y;
    }
    virtual void display_area() {
        cout << "Area not defined in base class" << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Triangle Area: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Rectangle Area: " << x * y << endl;
    }
};

int main() {
    Shape* s;
    Triangle t;
    Rectangle r;
    int choice;

    cout << "Enter 1 for Triangle, 2 for Rectangle: ";
    cin >> choice;

    if (choice == 1) {
        s = &t;
        cout << "Enter base and height: ";
    } else {
        s = &r;
        cout << "Enter length and breadth: ";
    }

    s->get_data();
    s->display_area();

    return 0;
}
