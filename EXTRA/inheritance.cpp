#include <iostream>
#include <string>
using namespace std;

// Base class
class Staff {
protected:
    int code;
    string name;
public:
    void getStaffData() {
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }
    void displayStaffData() {
        cout << "Code: " << code << "\nName: " << name << endl;
    }
};

// Education class (for Teacher and Officer only)
class Education {
protected:
    string qualification;
    string university;
public:
    void getEducationData() {
        cout << "Enter qualification: ";
        getline(cin, qualification);
        cout << "Enter university: ";
        getline(cin, university);
    }
    void displayEducationData() {
        cout << "Qualification: " << qualification << "\nUniversity: " << university << endl;
    }
};

// Teacher class
class Teacher : public Staff, public Education {
private:
    string subject;
    string publication;
public:
    void getData() {
        getStaffData();
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter publication: ";
        getline(cin, publication);
        getEducationData();
    }
    void displayData() {
        displayStaffData();
        cout << "Subject: " << subject << "\nPublication: " << publication << endl;
        displayEducationData();
    }
};

// Officer class
class Officer : public Staff, public Education {
private:
    char grade;
public:
    void getData() {
        getStaffData();
        cout << "Enter grade: ";
        cin >> grade;
        cin.ignore();
        getEducationData();
    }
    void displayData() {
        displayStaffData();
        cout << "Grade: " << grade << endl;
        displayEducationData();
    }
};

// Typist class
class Typist : public Staff {
protected:
    float speed;
public:
    void getTypistData() {
        getStaffData();
        cout << "Enter typing speed: ";
        cin >> speed;
    }
    void displayTypistData() {
        displayStaffData();
        cout << "Typing Speed: " << speed << " wpm" << endl;
    }
};

// Regular typist
class Regular : public Typist {
public:
    void getData() {
        getTypistData();
    }
    void displayData() {
        displayTypistData();
    }
};

// Casual typist
class Casual : public Typist {
private:
    float dailyWages;
public:
    void getData() {
        getTypistData();
        cout << "Enter daily wages: ";
        cin >> dailyWages;
    }
    void displayData() {
        displayTypistData();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

// Main function
int main() {
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    cout << "\nEnter Teacher Details:\n";
    t.getData();

    cout << "\nEnter Officer Details:\n";
    o.getData();

    cout << "\nEnter Regular Typist Details:\n";
    r.getData();

    cout << "\nEnter Casual Typist Details:\n";
    c.getData();

    // Displaying details
    cout << "\n--- Teacher Details ---\n";
    t.displayData();

    cout << "\n--- Officer Details ---\n";
    o.displayData();

    cout << "\n--- Regular Typist Details ---\n";
    r.displayData();

    cout << "\n--- Casual Typist Details ---\n";
    c.displayData();

    return 0;
}
