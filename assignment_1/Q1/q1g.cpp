#include <iostream>
#define PI_D 3.14159  // Define a constant using #define
using namespace std;

int main() {
    const double PI = 3.14159;  // Define a constant using const

    cout << "Value of PI (using const): " << PI << endl;
    cout << "Value of PI (using #define): " << PI_D << endl;

    return 0;
}
