#include <iostream>
using namespace std;

class Arithmetic {
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        cout << "Addition = " << a + b << endl;
    }

    void sub() {
        cout << "Subtraction = " << a - b << endl;
    }

    void mul() {
        cout << "Multiplication = " << a * b << endl;
    }

    void div() {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division = Error (division by zero)" << endl;
    }

    void mod() {
        if (b != 0)
            cout << "Modulus = " << a % b << endl;
        else
            cout << "Modulus = Error (division by zero)" << endl;
    }
};

int main() {
    Arithmetic obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.mod();
    return 0;
}
