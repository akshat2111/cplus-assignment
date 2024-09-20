#include <iostream>

using namespace std;

class Index {
private:
    int value;

public:
    // Constructor to initialize the index with a given value
    Index(int value) : value(value) {}

    // Overload the conversion operator to int
    operator int() const {
        return value;
    }

    // Overload the addition operator
    Index operator+(const Index& other) const {
        return Index(value + other.value);
    }

    // Overload the assignment operator
    Index& operator=(int newValue) {
        value = newValue;
        return *this;
    }
};

class Integer {
private:
    int value;

public:
    // Constructor to initialize the integer with a given value
    Integer(int value = 0) : value(value) {}

    // Overload the assignment operator
    Integer& operator=(const Index& index) {
        value = index;
        return *this;
    }
};

int main() {
    Index in(4), out(10);
    int x = in;
    int y = in + out;
    in = 2;
    Integer i;
    i = in;
    return 0;
}