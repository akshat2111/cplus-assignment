#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    cout << "Square of " << a << " is " << square(a) << endl;

    return 0;
}
