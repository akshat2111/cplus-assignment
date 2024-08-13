#include <iostream>
using namespace std;

int& largest(int &x, int &y) {
    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20;
    int &result = largest(a, b);

    cout << "Largest value: " << result << endl;

    result = 100;  // Modify the largest value
    cout << "After modification: a = " << a << ", b = " << b << endl;

    return 0;
}
