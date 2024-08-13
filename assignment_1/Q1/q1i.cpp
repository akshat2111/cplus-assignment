#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &ref = a;  // Reference to a

    cout << "Original value of a: " << a << endl;
    ref = 10;  // Changing value through reference
    cout << "New value of a: " << a << endl;

    return 0;
}
