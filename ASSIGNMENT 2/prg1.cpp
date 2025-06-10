#include <iostream>
#include <string>
using namespace std;

class bank_account {
private:
    string name;
    int acc_no;
    string acc_type;
    float balance;

public:
    void assign_values(string n, int no, string type, float bal) {
        name = n;
        acc_no = no;
        acc_type = type;
        balance = bal;
    }

    void deposit_amount(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Updated balance: " << balance << endl;
        } else {
            cout << "Invalid amount" << endl;
        }
    }

    void withdraw_amount(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "The remaining balance is : " << balance << endl;
        } else {
            cout << "This is an invalid input" << endl;
        }
    }

    void display() const {
        cout << "Name of the Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bank_account acc1;
    acc1.assign_values("SATYA", 2241004100, "Savings", 50000);
    acc1.deposit_amount(3000);
    acc1.withdraw_amount(400);
    acc1.display();
    return 0;
}
