#include <iostream>
using namespace std;

class Staff {
public:
    int code;
    string name;
    void get() {
        cin >> code >> name;
    }
    void show() {
        cout << code << " " << name << endl;
    }
};

class Teacher : public Staff {
public:
    string subject, publication;
    void get() {
        Staff::get();
        cin >> subject >> publication;
    }
    void show() {
        Staff::show();
        cout << subject << " " << publication << endl;
    }
};

class Officer : public Staff {
public:
    char grade;
    void get() {
        Staff::get();
        cin >> grade;
    }
    void show() {
        Staff::show();
        cout << grade << endl;
    }
};

class Typist : public Staff {
public:
    int speed;
    void get() {
        Staff::get();
        cin >> speed;
    }
    void show() {
        Staff::show();
        cout << speed << endl;
    }
};

class Regular : public Typist {
    // Nothing extra
};

class Casual : public Typist {
public:
    float wage;
    void get() {
        Typist::get();
        cin >> wage;
    }
    void show() {
        Typist::show();
        cout << wage << endl;
    }
};

int main() {
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    // Input
    t.get();
    o.get();
    r.get();
    c.get();

    // Output
    t.show();
    o.show();
    r.show();
    c.show();

    return 0;
}
