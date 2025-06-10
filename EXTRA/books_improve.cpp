#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *author;
    char *title;
    float price;
    int stock;

    static int successful;
    static int unsuccessful;

    void updatePrice(float newPrice) {
        price = newPrice;
    }

public:
    Book(const char *a, const char *t, float p, int s) {
        author = new char[strlen(a) + 1];
        title = new char[strlen(t) + 1];
        strcpy(author, a);
        strcpy(title, t);
        price = p;
        stock = s;
    }

    void transaction(const char *a, const char *t, int copies) {
        if (strcmp(author, a) == 0 && strcmp(title, t) == 0) {
            cout << "Book Found!\n";
            showDetails();
            if (copies <= stock) {
                cout << "Total Cost: " << copies * price << endl;
                stock -= copies;
                successful++;
            } else {
                cout << "Required copies not in stock.\n";
                unsuccessful++;
            }
        } else {
            cout << "Book not found!\n";
            unsuccessful++;
        }
    }

    void changePrice(float p) {
        updatePrice(p);
    }

    void showDetails() const {
        cout << "Author: " << author << "\nTitle: " << title
             << "\nPrice: " << price << "\nStock: " << stock << endl;
    }

    static void showStats() {
        cout << "Successful transactions: " << successful << endl;
        cout << "Unsuccessful transactions: " << unsuccessful << endl;
    }

    ~Book() {
        delete[] author;
        delete[] title;
    }
};

int Book::successful = 0;
int Book::unsuccessful = 0;

int main() {
    Book b1("Dan Brown", "Inferno", 500.0, 10);
    char a[50], t[50];
    int c;

    cout << "Enter Author and Title:\n";
    cin.getline(a, 50);
    cin.getline(t, 50);
    cout << "Enter number of copies: ";
    cin >> c;

    b1.transaction(a, t, c);

    cout << "\nChanging price...\n";
    b1.changePrice(450.0);
    b1.showDetails();

    Book::showStats();

    return 0;
}








int main() {
    Book *bptr = new Book("J.K. Rowling", "Harry Potter", 600.0, 20);

    char a[50], t[50];
    int c;

    cout << "Enter Author and Title:\n";
    cin.ignore();
    cin.getline(a, 50);
    cin.getline(t, 50);
    cout << "Enter number of copies: ";
    cin >> c;

    bptr->transaction(a, t, c);

    cout << "\nChanging price via pointer...\n";
    bptr->changePrice(550.0);
    bptr->showDetails();

    Book::showStats();

    delete bptr;

    return 0;
}
