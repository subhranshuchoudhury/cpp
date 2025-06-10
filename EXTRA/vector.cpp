#include <iostream>
using namespace std;

class Vector {
private:
    float vec[100];
    int size;

public:
    void create() {
        cout << "Enter size of vector: ";
        cin >> size;
        cout << "Enter elements:\n";
        for (int i = 0; i < size; ++i) {
            cin >> vec[i];
        }
    }

    void modify(int index, float value) {
        if (index >= 0 && index < size) {
            vec[index] = value;
        } else {
            cout << "Invalid index.\n";
        }
    }

    void multiplyByScalar(float scalar) {
        for (int i = 0; i < size; ++i) {
            vec[i] *= scalar;
        }
    }

    void display() const {
        cout << "Vector: (";
        for (int i = 0; i < size; ++i) {
            cout << vec[i];
            if (i != size - 1)
                cout << ", ";
        }
        cout << ")\n";
    }

    // Granting access to addVector function for 5.4
    friend Vector addVector(const Vector& v1, const Vector& v2);
};
Vector addVector(const Vector& v1, const Vector& v2) {
    Vector result;
    if (v1.size != v2.size) {
        cout << "Vectors must be of same size to add.\n";
        result.size = 0;
        return result;
    }

    result.size = v1.size;
    for (int i = 0; i < result.size; ++i) {
        result.vec[i] = v1.vec[i] + v2.vec[i];
    }

    return result;
}

int main() {
    Vector v1, v2, result;

    cout << "--- Create Vector 1 ---\n";
    v1.create();

    cout << "--- Create Vector 2 ---\n";
    v2.create();

    cout << "\n--- Vector 1 ---\n";
    v1.display();

    cout << "--- Vector 2 ---\n";
    v2.display();

    result = addVector(v1, v2);

    cout << "\n--- Resultant Vector after Addition ---\n";
    result.display();

    // Additional features from 5.2
    cout << "\n--- Modify element at index 1 in Vector 1 to 99.9 ---\n";
    v1.modify(1, 99.9);
    v1.display();

    cout << "\n--- Multiply Vector 2 by scalar 2 ---\n";
    v2.multiplyByScalar(2);
    v2.display();

    return 0;
}
