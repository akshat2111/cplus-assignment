#include <iostream>
using namespace std;

int factorial(const int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    int fact = factorial(number);
    cout << "Factorial of " << number << " is " << fact << endl;

    return 0;
}
