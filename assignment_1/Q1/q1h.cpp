#include <iostream>
using namespace std;

int main() {
    int a = 5;
    const int *ptr = &a;  // Pointer to a constant integer

    cout << "Value pointed to by ptr: " << *ptr << endl;

    // *ptr = 10;  // Error: Cannot modify the value pointed to by ptr

    int b = 10;
    ptr = &b;  // Pointer itself can be changed
    cout << "New value pointed to by ptr: " << *ptr << endl;

    return 0;
}
