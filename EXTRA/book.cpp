#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *author;
    char *title;
    float price;
    int stock;

public:
    Book(const char *a, const char *t, float p, int s) {
        author = new char[strlen(a) + 1];
        title = new char[strlen(t) + 1];
        strcpy(author, a);
        strcpy(title, t);
        price = p;
        stock = s;
    }

    void showDetails() {
        cout << "Author: " << author << "\nTitle: " << title
             << "\nPrice: " << price << "\nStock: " << stock << endl;
    }

    void searchBook(const char *a, const char *t, int copies) {
        if (strcmp(author, a) == 0 && strcmp(title, t) == 0) {
            cout << "Book Found!\n";
            showDetails();
            if (copies <= stock) {
                cout << "Total Cost: " << copies * price << endl;
            } else {
                cout << "Required copies not in stock.\n";
            }
        } else {
            cout << "Book not found!\n";
        }
    }

    ~Book() {
        delete[] author;
        delete[] title;
    }
};

int main() {
    Book b1("Dan Brown", "Inferno", 499.0, 10);
    char a[50], t[50];
    int c;

    cout << "Enter Author and Title to search:\n";
    cin.getline(a, 50);
    cin.getline(t, 50);
    cout << "Enter number of copies needed: ";
    cin >> c;

    b1.searchBook(a, t, c);

    return 0;
}
