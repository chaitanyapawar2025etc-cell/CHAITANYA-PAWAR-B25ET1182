#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

public:
    void input();
    void display();

    Complex add(Complex c);
    Complex subtract(Complex c);
    Complex multiply(Complex c);
    Complex divide(Complex c);
    Complex square();
};

void Complex::input()
{
    cout << "Enter real part: ";
    cin >> real;

    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::display()
{
    if (imag >= 0)
        cout << real << " + " << imag << "i";
    else
        cout << real << " - " << -imag << "i";
}

Complex Complex::add(Complex c)
{
    Complex result;

    result.real = real + c.real;
    result.imag = imag + c.imag;

    return result;
}

Complex Complex::subtract(Complex c)
{
    Complex result;

    result.real = real - c.real;
    result.imag = imag - c.imag;

    return result;
}

Complex Complex::multiply(Complex c)
{
    Complex result;

    result.real = (real * c.real) - (imag * c.imag);
    result.imag = (real * c.imag) + (imag * c.real);

    return result;
}

Complex Complex::divide(Complex c)
{
    Complex result;

    float denominator = (c.real * c.real) + (c.imag * c.imag);

    result.real = ((real * c.real) + (imag * c.imag)) / denominator;
    result.imag = ((imag * c.real) - (real * c.imag)) / denominator;

    return result;
}

Complex Complex::square()
{
    Complex result;

    result.real = (real * real) - (imag * imag);
    result.imag = 2 * real * imag;

    return result;
}

int main()
{
    Complex c1, c2;
    Complex result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "\nSecond complex number: ";
    c2.display();

    result = c1.add(c2);
    cout << "\n\nAddition: ";
    result.display();

    result = c1.subtract(c2);
    cout << "\nSubtraction: ";
    result.display();

    result = c1.multiply(c2);
    cout << "\nMultiplication: ";
    result.display();

    result = c1.divide(c2);
    cout << "\nDivision: ";
    result.display();

    result = c1.square();
    cout << "\nSquare of first complex number: ";
    result.display();

    cout << endl;

    return 0;
}
