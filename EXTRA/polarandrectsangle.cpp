#include <iostream>
#include <cmath>
using namespace std;

class Rectangle; // Forward declaration

class Polar {
private:
    double r, angle; // angle in radians
public:
    Polar() : r(0), angle(0) {}
    Polar(double radius, double ang) : r(radius), angle(ang) {}

    void display() const {
        cout << "Polar -> Radius: " << r << ", Angle (rad): " << angle << endl;
    }

    // Conversion constructor
    Polar(const Rectangle& rect);
};

class Rectangle {
private:
    double x, y;
public:
    Rectangle() : x(0), y(0) {}
    Rectangle(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    void display() const {
        cout << "Rectangle -> x: " << x << ", y: " << y << endl;
    }

    // Conversion constructor
    Rectangle(const Polar& p) {
        x = p.r * cos(p.angle);
        y = p.r * sin(p.angle);
    }

    friend class Polar; // to access r and angle
};

// Polar to Rectangle
Polar::Polar(const Rectangle& rect) {
    r = sqrt(rect.x * rect.x + rect.y * rect.y);
    angle = atan2(rect.y, rect.x);
}

int main() {
    Rectangle rect(3, 4);
    Polar polar;

    cout << "Original Rectangle:\n";
    rect.display();

    polar = Polar(rect);
    cout << "Converted to Polar:\n";
    polar.display();

    Rectangle newRect(polar);
    cout << "Converted back to Rectangle:\n";
    newRect.display();

    return 0;
}
