#include <iostream>
#define SQUARE(x) ((x) * (x))  // Macro for square
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;

    cout << "Square using inline function: " << square(a) << endl;
    cout << "Square using macro: " << SQUARE(a) << endl;

    return 0;
}
