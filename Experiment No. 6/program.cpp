#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload /= operator
    Complex& operator/=(const Complex& c) {
        float denominator = c.real * c.real + c.imag * c.imag;

        float newReal = (real * c.real + imag * c.imag) / denominator;
        float newImag = (imag * c.real - real * c.imag) / denominator;

        real = newReal;
        imag = newImag;

        return *this;
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(4, 6);
    Complex c2(2, 3);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    c1 /= c2;

    cout << "After division (c1 /= c2): ";
    c1.display();

    return 0;
}
