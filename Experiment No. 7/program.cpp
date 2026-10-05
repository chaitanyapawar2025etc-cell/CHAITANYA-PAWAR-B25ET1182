#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    // Parameterized constructor
    String(string s) {
        str = s;
    }

    // Display function
    void Display() {
        cout << "String: " << str << endl;
    }
};

int main() {
    // Creating object using parameterized constructor
    String obj("Hello, World!");

    // Display the string
    obj.Display();

    return 0;
}
