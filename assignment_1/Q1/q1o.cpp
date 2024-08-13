#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    double p = 5.5, q = 10.5;

    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Sum of doubles: " << add(p, q) << endl;

    return 0;
}
