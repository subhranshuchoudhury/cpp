#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char str[100];
public:
    void read() {
        cout << "Enter string: ";
        cin.getline(str, 100);
    }

    bool operator==(const String& other) {
        return strcmp(str, other.str) == 0;
    }
};

int main() {
    String s1, s2;
    s1.read();
    s2.read();

    if (s1 == s2)
        cout << "Strings are equal.\n";
    else
        cout << "Strings are not equal.\n";

    return 0;
}
