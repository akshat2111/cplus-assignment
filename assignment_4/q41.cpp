#include<iostream>
using namespace std;

class Integer {
    int value;  // Private member to hold the integer value
public:
   
    Integer(int val = 0) : value(val) {}

    Integer operator+(const Integer& other) const {
        return Integer(value + other.value);
    }

    Integer operator++(int) {
        Integer temp = *this;  // Create a copy of the current object
        value++;              // Increment the value
        return temp;          // Return the old value (before increment)
    }

    operator int() const {
        return value;  // Return the value (allows Integer to be converted to int)
    }

    friend ostream& operator<<(ostream& os, const Integer& obj) {
        os << obj.value;
        return os;
    }
};

int main() {
    Integer a = 4, b = a, c;
    c = a + b++;
    int i = a;
    cout << a << b << c;
    return 0;
}
