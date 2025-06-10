==================================================================================
Assignment -1
==================================================================================
(1)code-1 (prg1.cpp)
Uses an enum Day and a switch-case to map an input number (1–7) to the corresponding weekday.

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


(2)Demonstrates swapping two integers via a swap(int&,int&) function using pass-by-reference.

#include<bits/stdc++.h>
using namespace std;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
swap(a,b);
cout<<"After swapping a: "<<a<<" b: "<<b<<endl;
}

(3)Shows dynamic allocation of a one-dimensional array (new int[M]), populates and prints it, then delete[]s it.

#include<bits/stdc++.h>
using namespace std;
int* create_vector(int M){
   return new int[M];
}
int main(){
    int M;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>M;
    int *vector=create_vector(M);

    for(int i=0;i<M;i++){
        cin>>vector[i];
    }
    for(int i=0;i<M;i++){
        cout<<vector[i]<<" ";
    }

    cout<<endl;
    delete []vector;
    return 0;


}

(4)Implements a 2D “matrix” using a single dynamically allocated 1D array (new int[m*n]), with indexed input/output and proper deletion.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows: " << endl;
    cin >> m;
    cout << "Enter number of columns: " << endl;
    cin >> n;

    int *matrix = new int[m * n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i * n + j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i * n + j] << " ";
        }
        cout << endl;
    }
    delete[] matrix;
    return 0;
}

(5)Breaks matrix handling into functions: read_matrix(), input_matrix(), output_matrix(), and delete_matrix().


#include<bits/stdc++.h>
using namespace std;
int *read_matrix(int m, int n){
    return new int[m*n];
}
void input_matrix(int *matrix,int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i*n+j];
        }
    }
}
void output_matrix(int *matrix,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i*n+j]<<" ";
        }
        cout<<endl;
    }
}
   
void delete_matrix(int *matrix){
    delete []matrix;
}
int main(){
    int m,n;
    cin>>m>>n;
    
    int *matrix= read_matrix(m,n);

    input_matrix(matrix,m,n);
    output_matrix(matrix,m,n);

    delete_matrix(matrix);

    return 0;
}

(6)Same as code-5 but with default parameters (m=3, n=3) on each matrix function.


#include<bits/stdc++.h>
using namespace std;
int *read_matrix(int m=3,int n=3){
    return new int[m*n];
}
void input_matrix(int *matrix,int m=3, int n=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i*n+j];
        }
    }
}
void output_matrix(int *matrix,int m=3,int n=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i*n+j];
        }
    }
    cout<<endl;
}
void delete_matrix(int *matrix){
    delete []matrix;
}
int main(){
    int m,n;
    int *matrix= read_matrix(m,n);
    input_matrix(matrix,m,n);
    output_matrix(matrix,m,n);
    delete_matrix(matrix);

    return 0;
}

(7)Defines a macro to compute the maximum of three integers and prints the largest of 10, 9, 11.

#include<bits/stdc++.h>
#define macro(a,b,c) ((a>b)?((a>c)? a:c ):((b>c)? b:c ))
using namespace std;
int main(){
    int a=10,b=9,c=11;
    cout<<"The largest number is : "<<macro(a,b,c)<<endl;
}

(8)Implements a power(int m, int n=2) function (default exponent 2) to compute mⁿ.

#include<bits/stdc++.h>
using namespace std;
double power(int m, int n=2){
    double result=1;
    for(int i=0;i<n;i++){
        result *=m;
    }
    return result;
}
int main(){
    int m,n;
    cout<<"Enter the values of m and n"<<endl;
    cin>>m>>n;
    cout<<"The result is : "<<power(m,n)<<endl;
    cout<<"The square of the number is : "<<power(m)<<endl;
    return 0;

}


(9)Overloads power() for both int and double bases with default exponent 2, demonstrating function overloading.

#include<bits/stdc++.h>
using namespace std;
double power(double m, int n=2){
    double result=1;
    for(int i=0;i<n;i++){
        result *=m;
    }
    return result;
}
int power(int m, int n=2){
    int result=1;
    for(int i=0;i<n;i++){
        result *=m;
    }
    return result;
}
int main(){
    double m;
    int n;
    cout<<"Enter the values of m and n"<<endl;
    cin>>m>>n;
    cout<<"The result is : "<<power(m,n)<<endl;
    cout<<"The square of the number is : "<<power(m)<<endl;
    return 0;

}

==================================================================================
Assignment -2
==================================================================================

(1) A simple bank_account class with assign_values(), deposit_amount(), withdraw_amount(), and display() methods, used in main().

#include<bits/stdc++.h>
using namespace std;
class bank_account{
private:
    string name;
    int acc_no;
    string acc_type;
    float balance;
public:
    void assign_values(string name,int acc_no,string acc_type,float balance){
        this->name=name;
        this->acc_no=acc_no;
        this->acc_type=acc_type;
        this->balance=balance;
    }
    void deposit_amount(float amount){
        if(amount>0){
            this->balance+=amount;
            cout<<"Updated balance: "<<this->balance<<endl;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }
    void withdraw_amount(float amount){
        if(amount>0 && amount<= this->balance){
            this->balance-=amount;
            cout<<"The remaining balance is : "<<this->balance<<endl;
        }
        else{
            cout<<"This is an invalid input";
        }
    }
    void display()const{
        cout<<"Name of the Holder: "<<this->name<<endl;
        cout<<"Balance: "<<this->balance<<endl;
    }
};
int main(){
    bank_account acc1;
    acc1.assign_values("SATYA",2241004100,"Savings",50000);
    acc1.deposit_amount(3000);
    acc1.withdraw_amount(400);
    acc1.display();
    return 0;
}

(2) Extends the bank account example with an interactive menu loop to deposit, withdraw, search, or exit.

#include <iostream>
using namespace std;

class bank_account {
private:
    string name;
    int acc_no;
    string acc_type;
    float balance;

public:
    void assign_values(string name, int acc_no, string acc_type, float balance) {
        this->name = name;
        this->acc_no = acc_no;
        this->acc_type = acc_type;
        this->balance = balance;
    }

    void deposit_amount(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
            cout << "Updated balance: " << balance << endl;
        } else {
            cout << "Invalid amount entered.\n";
        }
    }

    void withdraw_amount(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            cout << "Remaining balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Account Type: " << acc_type << endl;
        cout << "Balance: " << balance << endl;
    }

    int acc_number() const {
        return acc_no;
    }
};

int main() {
    bank_account acc[10];
    int i;

    // Step 1: Assign values
    for (i = 0; i < 10; i++) {
        string name, acc_type;
        int acc_no;
        float balance;

        cout << "\nEnter details for account " << (i + 1) << ":\n";
        cout << "Name (no spaces): ";
        cin >> name;
        cout << "Account Number: ";
        cin >> acc_no;
        cout << "Account Type (Savings/Current): ";
        cin >> acc_type;
        cout << "Initial Balance: ";
        cin >> balance;

        acc[i].assign_values(name, acc_no, acc_type, balance);
    }

    // Step 2: Menu system
    int choice, acc_number;
    float amount;
    do {
        cout << "\n====== BANK MENU ======\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Display Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter account number to deposit into: ";
            cin >> acc_number;
            for (i = 0; i < 10; i++) {
                if (acc[i].acc_number() == acc_number) {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    acc[i].deposit_amount(amount);
                    break;
                }
            }
            if (i == 10)
                cout << "Account not found.\n";
            break;

        case 2:
            cout << "Enter account number to withdraw from: ";
            cin >> acc_number;
            for (i = 0; i < 10; i++) {
                if (acc[i].acc_number() == acc_number) {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    acc[i].withdraw_amount(amount);
                    break;
                }
            }
            if (i == 10)
                cout << "Account not found.\n";
            break;

        case 3:
            cout << "Enter account number to display: ";
            cin >> acc_number;
            for (i = 0; i < 10; i++) {
                if (acc[i].acc_number() == acc_number) {
                    acc[i].display();
                    break;
                }
            }
            if (i == 10)
                cout << "Account not found.\n";
            break;

        case 4:
            cout << "Exiting program. Thank you!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}


(3) Two distance classes (DM and DB) with different units; input and a free function add() combine them and display the result in a uniform format.

#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    float meters;
    float centimeters;

public:
    void read() {
        cout << "Enter distance in meters and centimeters: ";
        cin >> meters >> centimeters;
    }

    void display() const {
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n";
    }

    friend void add(const DM& d1, const DB& d2, DM& result);
    friend void add(const DM& d1, const DB& d2, DB& result);
};

class DB {
    float feet;
    float inches;

public:
    void read() {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inches;
    }

    void display() const {
        cout << "Distance: " << feet << " feet and " << inches << " inches\n";
    }

    friend void add(const DM& d1, const DB& d2, DM& result);
    friend void add(const DM& d1, const DB& d2, DB& result);
};

// 1 foot = 0.3048 meters, 1 inch = 2.54 cm

void add(const DM& d1, const DB& d2, DM& result) {
    // Convert DB to meters and centimeters
    float total_meters = d1.meters + d2.feet * 0.3048;
    float total_cm = d1.centimeters + d2.inches * 2.54;

    // Convert extra centimeters to meters
    total_meters += int(total_cm / 100);
    total_cm = int(total_cm) % 100;

    result.meters = total_meters;
    result.centimeters = total_cm;
}

void add(const DM& d1, const DB& d2, DB& result) {
    // Convert DM to inches
    float total_inches = (d1.meters * 100 + d1.centimeters) / 2.54;
    total_inches += d2.feet * 12 + d2.inches;

    result.feet = int(total_inches / 12);
    result.inches = int(total_inches) % 12;
}

int main() {
    DM dm1, dm_result;
    DB db1, db_result;

    dm1.read();
    db1.read();

    int choice;
    cout << "\nChoose result format:\n";
    cout << "1. Result in Meters and Centimeters\n";
    cout << "2. Result in Feet and Inches\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        add(dm1, db1, dm_result);
        cout << "\nResult in meters and centimeters:\n";
        dm_result.display();
    } else if (choice == 2) {
        add(dm1, db1, db_result);
        cout << "\nResult in feet and inches:\n";
        db_result.display();
    } else {
        cout << "Invalid choice!\n";
    }

    return 0;
}


(4) A Distance class storing km, m, cm; reads an array of objects, adds two selected distances via a member add_distance(), and displays the result.

#include <iostream>
using namespace std;

class Distance {
private:
    int km, m, cm;

    void normalize() {
        m += cm / 100;
        cm = cm % 100;
        km += m / 1000;
        m = m % 1000;
    }

public:
    void input_distance(int km, int m, int cm) {
        this->km = km;
        this->m = m;
        this->cm = cm;
        normalize();
    }

    void display() const {
        cout << km << " km, " << m << " m, " << cm << " cm" << endl;
    }

    Distance add_distance(const Distance& other) const {
        Distance result;
        result.km = this->km + other.km;
        result.m = this->m + other.m;
        result.cm = this->cm + other.cm;
        result.normalize();
        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of distance objects: ";
    cin >> n;

    Distance d[100];
    for (int i = 0; i < n; ++i) {
        int km, m, cm;
        cout << "Enter distance " << i << " (km m cm): ";
        cin >> km >> m >> cm;
        d[i].input_distance(km, m, cm);
    }

    cout << "\n--- All Distances ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "Distance " << i << ": ";
        d[i].display();
    }

    int idx1, idx2;
    cout << "\nEnter index of first distance to add: ";
    cin >> idx1;
    cout << "Enter index of second distance to add: ";
    cin >> idx2;

    if (idx1 >= 0 && idx1 < n && idx2 >= 0 && idx2 < n) {
        Distance result = d[idx1].add_distance(d[idx2]);
        cout << "\nResult of addition:\n";
        result.display();
    } else {
        cout << "Invalid indices.\n";
    }

    return 0;
}

==================================================================================
Assignment -3
==================================================================================
(1) String class that manages a dynamic char*, with constructors, destructor, and member functions to concatenate (add) and copy strings.

# include<bits/stdc++.h>
using namespace std;
class String{
    char *str;
public:
    //default constructor
    String(){  
        str= new char[1]; //dynamically allocating heap memory for 1 char
        str[0]='\0'; //initializes an empty string
    }
    //parameterized constructor
    String(const char *s){ //accept the string input(cannot modify)
        str= new char[strlen(s)+1];//allocate memory for the string + null char
        strcpy(str,s); // copies the input string to newly allocated memory
    }
    //destructor
    ~String(){
        delete [] str; // frees dynamically allocated memory for 'str'
    }
    //member function to copy 
    void copy(const String &s){
        delete [] str; // free existing memory to avoid memory leak
        str= new char[strlen(s.str)+1];  //allocate new memory of the incoming string
        strcpy(str,s.str); //copy the input object string to this object's string
    }
    //member function to add
    void add(const String &s1,const String &s2){
        delete [] str;
        str= new char[strlen(s1.str) + strlen(s2.str)+1]; //allocate memory for the combined string + null terminator  
        strcpy(str, s1.str); //copy first string
        strcat(str, s2.str); //append first string to the second
    }
    // member function to display
    void display(){
        cout<<str<<endl;
    }

};

int main(){
    // create uninitialized string object 
    String s1;
    s1.display();

    // create objects with string constants
    String s2("Well done!");
    s2.display();
    
    // Concatenates two strings properly
    String s3;
    s3.add(s1,s2);
    s3.display();
    
    // displays desired string object
    String s4;
    s4.copy(s2);
    s4.display();

    return 0;
}


(2) A bookshop class holding title, author, publisher, price; supports creation of multiple objects and a search(title,author) method to find and display a book.

#include<bits/stdc++.h>
using namespace std;
class bookshop{
    char author[50];
    char title[50];
    float price;
    char publisher[50];
public:
    bookshop(){
        strcpy(author,"");
        strcpy(title,"");
        strcpy(publisher,"");
        price=0.0;
    }
    bookshop(const char *a,const char *t,const char *p, float pr){
        strcpy(author,a);
        strcpy(title,t);
        strcpy(publisher,p);
        price=pr;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
    }
    bool search(const char *t , const char *a) const{
        return(strcmp(title,t)==0 && strcmp(author,a)==0);
    }
};
int main(){
    bookshop b1("J.K. Rowling", "Harry Potter", "Bloomsbury", 500);
    bookshop b2("George Orwell", "1984", "Secker & Warburg", 300);
    bookshop b3("Harper Lee", "To Kill a Mockingbird", "J.B. Lippincott & Co.", 400);

    char a[50],t[50];
    cout<<"Enter the title of the book: ";
    cin>>t;
    cout<<"Enter the author of the book: ";
    cin>>a;

    if(b1.search(t,a)){
        cout<<"Book found"<<endl;
        b1.display();
    }
    else if(b2.search(t,a)){
        cout<<"Book found"<<endl;
        b2.display();
    }
    else if(b3.search(t,a)){
        cout<<"Book found"<<endl;
        b3.display();
    }
    else{
        cout<<"Book not found"<<endl;
    }

    return 0;
}

(3) A Complex class with real & imaginary parts and a static addcomplex() to sum two Complex objects, plus display logic.

#include<bits/stdc++.h>
using namespace std;
class Complex{
    float real;
    float imaginary;
public:
    Complex(){
        real=0.0;
        imaginary=0.0;
    }
    Complex(float r , float i){
        real=r;
        imaginary=i;
    }
    static Complex addcomplex(const Complex &c1 , const Complex &c2){
        float addReal= c1.real + c2.real;
        float addImaginary= c1.imaginary + c2.imaginary;
        return Complex(addReal,addImaginary);
    }
    void display()const{
        cout<<real<<" +j"<<imaginary<<endl;
    }
};
int main(){
    Complex A(3.12,5.65);
    Complex B(2.75,1.21);

    cout<<"A: "<<endl;
    A.display();
    cout<<"B: "<<endl;
    B.display();

    Complex C =Complex::addcomplex(A,B);

    cout<<"The Sum is : "<<endl;
    C.display();

    return 0;

}



==================================================================================
Assignment -4
==================================================================================
(1) A polar class representing complex numbers in polar form; overloads +, -, *, / to perform polar arithmetic and displays results.

#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.1416

class polar {
    float r, a, x, y;
public:
    polar() {};
    polar(float r1, float a1);
    polar operator+(polar r1);
    void display(void);
};

polar::polar(float r1, float a1) {
    r = r1;
    a = a1 * (pi / 180);
    x = r * cos(a);
    y = r * sin(a);
}

polar polar::operator+(polar r1) {
    polar R;
    R.x = x + r1.x;
    R.y = y + r1.y;
    R.r = sqrt(R.x * R.x + R.y * R.y);
    R.a = atan(R.y / R.x);
    return R;
}

void polar::display() {
    cout << "radius = " << r << "\n angle = " << a * (180 / pi) << "\n";
}

int main() {
    polar p1, p2, p3;
    float r, a;
    cout << " Enter radius and angle : ";
    cin >> r >> a;
    p1 = polar(r, a);
    p2 = polar(8, 45);
    p3 = p1 + p2;

    cout << " p1 : \n";
    p1.display();
    cout << " p2 : \n ";
    p2.display();
    cout << " p3 : \n ";
    p3.display();
    return 0;
}


(2) A Counter class with an integer value, demonstrating overloading of prefix (++c) and postfix (c++) increment operators.

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    
    Counter(int v = 0) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    Counter& operator++() {
        ++value;  
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;  
        value++;              
        return temp;          
    }
};

int main() {
    Counter c1(10);

    cout << "Initial value: ";
    c1.display();

    ++c1;  
    cout << "After prefix ++c1: ";
    c1.display();

    c1++;  
    cout << "After postfix c1++: ";
    c1.display();

    return 0;
}


(3) A FLOAT wrapper class around a float, with overloaded +, -, *, / operators and a display() method.

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



==================================================================================
Assignment -5
==================================================================================
(1) Shows single inheritance: a base Staff class and derived Teacher, Officer, etc., each adding member data; inputs each object’s data then displays it.

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


(2) Demonstrates runtime polymorphism: a base Shape with a virtual display_area(), and derived Triangle & Rectangle override it; a base-class pointer calls the correct area calculation.


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


MINOR PROJECT
1)Vector Class Basic Operations:
Create a class to represent a vector of float values with methods to create, modify, multiply by a scalar, and display the vector.

#include <iostream>
using namespace std;

class Vector {
private:
    float arr[100]; // fixed size array
    int size;

public:
    // (a) Create a vector
    void create() {
        cout << "Enter number of elements: ";
        cin >> size;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // (b) Modify the value of a given element
    void modify(int index, float value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Invalid index\n";
        }
    }

    // (c) Multiply by a scalar value
    void multiply(float scalar) {
        for (int i = 0; i < size; i++) {
            arr[i] *= scalar;
        }
    }

    // (d) Display the vector
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i != size - 1) {
                cout << ", ";
            }
        }
        cout << ")\n";
    }
};

// Test Program
int main() {
    Vector v;
    v.create();            // create the vector
    v.display();           // show original vector
    v.modify(1, 99.5);     // modify index 1
    v.display();           // show after modification
    v.multiply(2.0);       // multiply all by 2
    v.display();           // final result
    return 0;
}

2)Vector Addition:
Extend the vector class to add two vectors using object passing and display the resultant vector.

#include <iostream>
using namespace std;

class Vector {
private:
    float arr[100]; // fixed size array
    int size;

public:
    // Create a vector
    void create() {
        cout << "Enter number of elements: ";
        cin >> size;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Modify the value of a given element
    void modify(int index, float value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Invalid index\n";
        }
    }

    // Multiply by a scalar value
    void multiply(float scalar) {
        for (int i = 0; i < size; i++) {
            arr[i] *= scalar;
        }
    }

    // Add two vectors and store the result in the current object
    void add(Vector v1, Vector v2) {
        if (v1.size != v2.size) {
            cout << "Cannot add vectors of different sizes.\n";
            size = 0;
            return;
        }
        size = v1.size;
        for (int i = 0; i < size; i++) {
            arr[i] = v1.arr[i] + v2.arr[i];
        }
    }

    // Display the vector
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i != size - 1) {
                cout << ", ";
            }
        }
        cout << ")\n";
    }
};

// Test Program
int main() {
    Vector v1, v2, v3;

    cout << "Enter first vector:\n";
    v1.create();

    cout << "Enter second vector:\n";
    v2.create();

    cout << "First vector: ";
    v1.display();

    cout << "Second vector: ";
    v2.display();

    v3.add(v1, v2);  // Add v1 and v2, store result in v3

    cout << "Resultant vector after addition: ";
    v3.display();

    return 0;
}

3)Number Class Operations:
Create a class Number to store an integer and provide methods to set, get, print, check negativity, check divisibility, and return absolute value.

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Sets n into value
    void setNumber(int n) {
        value = n;
    }

    // Returns current value
    int getNumber() {
        return value;
    }

    // Prints the value
    void printNumber() {
        cout << "Number: " << value << endl;
    }

    // Checks if number is negative
    bool isNegative() {
        if (value < 0)
            return true;
        else
            return false;
    }

    // Checks if value is divisible by n
    bool isDivisibleBy(int n) {
        if (n == 0) {
            cout << "Cannot divide by zero.\n";
            return false;
        }
        if (value % n == 0)
            return true;
        else
            return false;
    }

    // Returns absolute value
    int absoluteValue() {
        if (value < 0)
            return -value;
        else
            return value;
    }
};

// Test program
int main() {
    Number num;

    num.setNumber(-15);
    num.printNumber();

    cout << "Is Negative? " << (num.isNegative() ? "Yes" : "No") << endl;
    cout << "Is divisible by 5? " << (num.isDivisibleBy(5) ? "Yes" : "No") << endl;
    cout << "Absolute value: " << num.absoluteValue() << endl;

    return 0;
}

MAJOR PROJECT

1)Bank Account Inheritance Summary:
Design a base class Account and derive SavingsAccount and CurrentAccount classes to handle deposits, withdrawals, interest, penalties, and balance management based on account type.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account {
protected:
    string name;
    int accNo;
    string accType;
    float balance;
public:
    Account(string n, int no, string type, float bal) {
        name = n;
        accNo = no;
        accType = type;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void displayBalance() {
        cout << "Balance: Rs. " << balance << endl;
    }

    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(string n, int no, float bal) : Account(n, no, "Savings", bal) {}

    void computeInterest() {
        float rate = 0.05; // 5% interest
        float interest = balance * pow(1 + rate, 1) - balance;
        deposit(interest);
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(string n, int no, float bal) : Account(n, no, "Current", bal) {}

    void checkMinimumBalance() {
        if (balance < 1000) {
            cout << "Balance below minimum. Rs. 100 penalty imposed." << endl;
            balance -= 100;
        }
    }
};

int main() {
    SavingsAccount s("Alice", 101, 5000);
    s.computeInterest();
    s.displayBalance();
    s.withdraw(1000);
    s.displayBalance();

    CurrentAccount c("Bob", 102, 900);
    c.deposit(500);
    c.checkMinimumBalance();
    c.displayBalance();

    return 0;
}

2) Multipath Inheritance Summary:
Implement a class Master using multipath inheritance from Account and Admin, both derived from Person, to manage and display combined information using constructors.

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void getPersonInfo() {
        cout << "Enter name: ";
        cin >> name;
    }
    void showPersonInfo() {
        cout << "Name: " << name << endl;
    }
};

class Account : virtual public Person {
protected:
    int accNo;
public:
    void getAccountInfo() {
        cout << "Enter account number: ";
        cin >> accNo;
    }
    void showAccountInfo() {
        cout << "Account Number: " << accNo << endl;
    }
};

class Admin : virtual public Person {
protected:
    string role;
public:
    void getAdminInfo() {
        cout << "Enter role: ";
        cin >> role;
    }
    void showAdminInfo() {
        cout << "Role: " << role << endl;
    }
};

class Master : public Account, public Admin {
public:
    void getAllInfo() {
        getPersonInfo();
        getAccountInfo();
        getAdminInfo();
    }

    void showAllInfo() {
        showPersonInfo();
        showAccountInfo();
        showAdminInfo();
    }
};

int main() {
    Master m;
    m.getAllInfo();
    cout << "\n--- Details Entered ---\n";
    m.showAllInfo();

    return 0;
}

3)Shopping List Management Summary:
Create a class-based C++ program to manage a shopping list with item codes and prices, supporting add, delete, display, and total value calculation using arrays as class members.

#include <iostream>
using namespace std;

class Item {
public:
    int code;
    float price;
};

class ShoppingList {
    Item items[50];
    int count;
public:
    ShoppingList() {
        count = 0;
    }

    void addItem() {
        cout << "Enter item code and price: ";
        cin >> items[count].code >> items[count].price;
        count++;
    }

    void deleteItem() {
        int code;
        cout << "Enter code to delete: ";
        cin >> code;
        for (int i = 0; i < count; i++) {
            if (items[i].code == code) {
                for (int j = i; j < count - 1; j++)
                    items[j] = items[j + 1];
                count--;
                break;
            }
        }
    }

    void totalValue() {
        float sum = 0;
        for (int i = 0; i < count; i++)
            sum += items[i].price;
        cout << "Total Order Value: Rs. " << sum << endl;
    }

    void displayItems() {
        cout << "Code\tPrice\n";
        for (int i = 0; i < count; i++)
            cout << items[i].code << "\t" << items[i].price << endl;
    }
};

int main() {
    ShoppingList sl;
    sl.addItem();
    sl.addItem();
    sl.displayItems();
    sl.totalValue();
    sl.deleteItem();
    sl.displayItems();

    return 0;
}



