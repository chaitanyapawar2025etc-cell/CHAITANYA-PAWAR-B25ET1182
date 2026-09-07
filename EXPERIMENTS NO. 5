#include <iostream>
using namespace std;

class Temperature {
public:
    // Overloaded function: Celsius to Fahrenheit
    float temperature(float celsius) {
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << "°C = " << fahrenheit << "°F" << endl;
        return fahrenheit;
    }

    // Overloaded function: Fahrenheit to Celsius
    float temperature(float fahrenheit, int flag) {
        float celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << "°F = " << celsius << "°C" << endl;
        return celsius;
    }
};

int main() {
    Temperature t;
    float c, f;

    cout << "Enter temperature in Celsius: ";
    cin >> c;
    t.temperature(c);          // calls Celsius -> Fahrenheit version

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    t.temperature(f, 1);       // calls Fahrenheit -> Celsius version (flag distinguishes it)

    return 0;
}
