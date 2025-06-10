#include <iostream>
#include <string>
using namespace std;

// Base class
class Staff {
private:
    int code;
    string name;
public:
    void getData() {
        cout << "Enter staff code: ";
        cin >> code;
        cin.ignore();
        cout << "Enter staff name: ";
        getline(cin, name);
    }
    void displayData() const {
        cout << "Staff Code: " << code << "\nStaff Name: " << name << endl;
    }
};

// Education class
class Education {
private:
    string qualification;
    string university;
public:
    void getData() {
        cout << "Enter qualification: ";
        getline(cin, qualification);
        cout << "Enter university: ";
        getline(cin, university);
    }
    void displayData() const {
        cout << "Qualification: " << qualification << "\nUniversity: " << university << endl;
    }
};

// Teacher class (contains Staff)
class Teacher {
private:
    Staff staff;
    Education edu;
    string subject, publication;
public:
    void getData() {
        staff.getData();
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter publication: ";
        getline(cin, publication);
        edu.getData();
    }
    void displayData() const {
        staff.displayData();
        cout << "Subject: " << subject << "\nPublication: " << publication << endl;
        edu.displayData();
    }
};

// Officer class (contains Staff)
class Officer {
private:
    Staff staff;
    Education edu;
    char grade;
public:
    void getData() {
        staff.getData();
        cout << "Enter grade: ";
        cin >> grade;
        cin.ignore();
        edu.getData();
    }
    void displayData() const {
        staff.displayData();
        cout << "Grade: " << grade << endl;
        edu.displayData();
    }
};

// Typist class (contains Staff)
class Typist {
private:
    Staff staff;
    float speed;
public:
    void getData() {
        staff.getData();
        cout << "Enter typing speed (wpm): ";
        cin >> speed;
        cin.ignore();
    }
    void displayData() const {
        staff.displayData();
        cout << "Typing Speed: " << speed << " wpm" << endl;
    }
};

// Main function
int main() {
    Teacher t;
    Officer o;
    Typist tp;

    cout << "\nEnter Teacher details:\n";
    t.getData();

    cout << "\nEnter Officer details:\n";
    o.getData();

    cout << "\nEnter Typist details:\n";
    tp.getData();

    cout << "\n--- Displaying Teacher ---\n";
    t.displayData();

    cout << "\n--- Displaying Officer ---\n";
    o.displayData();

    cout << "\n--- Displaying Typist ---\n";
    tp.displayData();

    return 0;
}
