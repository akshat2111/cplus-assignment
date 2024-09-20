#include<iostream>
using namespace std;

// Index class
class Index {
    int value;  // Value of the index

public:
    // Constructor to initialize index
    Index(int v = 0) : value(v) {}

    // Overload the int() conversion operator to allow "int x = in;"
    operator int() const {
        return value;
    }

    // Overload the assignment operator to allow "in = 2;"
    Index& operator=(int v) {
        value = v;
        return *this;
    }

    // Overload the + operator to allow "y = in + out;"
    int operator+(const Index& other) const {
        return value + other.value;
    }
};

// Integer class
class Integer {
    int value;

public:
    // Constructor to initialize Integer
    Integer(int v = 0) : value(v) {}

    // Overload the assignment operator to assign an Index object to Integer
    Integer& operator=(const Index& idx) {
        value = int(idx);  // Assign the value from Index to Integer
        return *this;
    }

    // Function to display the value of Integer
    void display() const {
        cout << "Integer value: " << value << endl;
    }
};

int main() {
    Index in(4), out(10);  // Initialize Index objects
    
    int x = in;  // Convert Index to int
    cout << "x: " << x << endl;

    int y = in + out;  // Add two Index objects
    cout << "y: " << y << endl;

    in = 2;  // Assign int to Index
    cout << "in after assignment: " << in << endl;

    Integer i;  // Initialize Integer object
    i = in;  // Assign Index to Integer
    i.display();  // Display the value of Integer

    return 0;
}
