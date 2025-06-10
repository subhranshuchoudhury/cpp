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
