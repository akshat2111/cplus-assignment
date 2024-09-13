#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }

    // Virtual destructor
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int* data; // Pointer to simulate dynamic memory allocation

    Derived() {
        data = new int[10]; // Allocating dynamic memory
        cout << "Derived class constructor called and memory allocated." << endl;
    }

    // Destructor
    ~Derived() {
        delete[] data; // Releasing the allocated memory
        cout << "Derived class destructor called and memory freed." << endl;
    }
};

int main() {
    // Creating a base class pointer that points to a derived class object
    Base* ptr = new Derived();

    // Deleting the object using the base class pointer
    // This will call the Derived class destructor if the base class destructor is virtual
    delete ptr;

    return 0;
}

