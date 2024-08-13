#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0) {
    return a + b + c;
}

int main() {
    cout << "Sum of 1, 2, 3: " << sum(1, 2, 3) << endl;
    cout << "Sum of 1, 2: " << sum(1, 2) << endl;
    cout << "Sum of 1: " << sum(1) << endl;

    return 0;
}
