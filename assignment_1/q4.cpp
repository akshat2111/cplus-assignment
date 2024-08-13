#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // The variable i is out of scope here
    // cout << i;  // This would give an error because i is not accessible here

    return 0;
}
