#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i <= 50; i+=2) {
      sum = sum + i;
    }

cout << "Sum of even no between 1 to 50 numbers is " << sum;

    return 0;
}
