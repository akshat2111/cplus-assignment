#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
