#include <iostream>
using namespace std;

int main() {
    cout << "Celsius to Fahrenheit Conversion Table:" << endl;
    for (int celsius = 0; celsius <= 100; celsius++) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;  // Fahrenheit conversion
        cout << celsius << "°C = " << fahrenheit << "°F" << endl;
    }

    return 0;
}
