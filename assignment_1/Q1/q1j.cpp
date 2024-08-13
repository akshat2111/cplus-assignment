#include <iostream>
using namespace std;

void printValue(const int &x) {
    cout << "The value is " << x << endl;
}

int main() {
    int a = 100;
    printValue(a);  // Passing by constant reference

    return 0;
}
