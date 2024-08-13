#include <iostream>
using namespace std;

int a = 20;  // Global variable

int main() {
    int a = 10;  // Local variable

    cout << "Local a: " << a << endl;
    cout << "Global a: " << ::a << endl;

    return 0;
}
