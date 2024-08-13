#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    for (int i = 1; i <= 6; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }

    return 0;
}
