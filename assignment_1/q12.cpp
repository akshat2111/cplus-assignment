#include <iostream>
using namespace std;

inline int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10, z = 15;

    cout << "Sum: " << add(x, y, z) << endl;

    return 0;
}
