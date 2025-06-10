#include<iostream>
using namespace std;
class FLOAT {
    float data;

public:
    FLOAT(){};
    FLOAT(float d) {
        data = d;
    }

    FLOAT operator+(FLOAT f1);
    FLOAT operator-(FLOAT f2);
    FLOAT operator*(FLOAT f3);
    FLOAT operator/(FLOAT f4);
    void display();
};

FLOAT FLOAT::operator+(FLOAT f1) {
    FLOAT temp;
    temp.data = data + f1.data;
    return (temp);
}

FLOAT FLOAT::operator-(FLOAT f2) {
    FLOAT temp;
    temp.data = data - f2.data;
    return temp;
}

FLOAT FLOAT::operator*(FLOAT f3) {
    FLOAT temp;
    temp.data = data * f3.data;
    return temp;
}

FLOAT FLOAT::operator/(FLOAT f4) {
    FLOAT temp;
    temp.data = data / f4.data;
    return (temp);
}

void FLOAT::display() {
    cout << data << "\n";
}

int main() {
    FLOAT F1, F2, F3, F4, F5, F6;
    F1 = FLOAT(2.5);
    F2 = FLOAT(3.1);
    F3 = F1 + F2;
    F4 = F1 - F2;
    F5 = F1 * F2;
    F6 = F1 / F2;

    cout << " F1 = ";
    F1.display();
    cout << " F2 = ";
    F2.display();
    cout << " F1+F2 = ";
    F3.display();
    cout << " F1-F2 = ";
    F4.display();
    cout << " F1*F2 = ";
    F5.display();
    cout << " F1/F2= ";
    F6.display();

    return 0;
}
