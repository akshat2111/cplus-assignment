#include <iostream>
using namespace std;

class Vector {
    int *arr;
    int size;
public:
    Vector(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    void setvalues() {
        cout << "Enter " << size << " elements for vector: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void addition(Vector other) {
        if (size != other.size) {
            cout << "Cannot add vectors of different sizes." << endl;
            return;
        }
        cout << "Result of addition: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] + other.arr[i] << " ";
        }
        cout << endl;
    }

    void subtraction(Vector other) {
        if (size != other.size) {
            cout << "Cannot subtract vectors of different sizes." << endl;
            return;
        }
        cout << "Result of subtraction: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] - other.arr[i] << " ";
        }
        cout << endl;
    }

    void lessthan(Vector other) {
        if (size != other.size) {
            cout << "Cannot compare vectors of different sizes." << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            if (arr[i] >= other.arr[i]) {
                cout << "Vector 1 is not less than Vector 2." << endl;
                return;
            }
        }
        cout << "Vector 1 is less than Vector 2." << endl;
    }

    void greaterthan(Vector other) {
        if (size != other.size) {
            cout << "Cannot compare vectors of different sizes." << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            if (arr[i] <= other.arr[i]) {
                cout << "Vector 1 is not greater than Vector 2." << endl;
                return;
            }
        }
        cout << "Vector 1 is greater than Vector 2." << endl;
    }

    void equalornot(Vector other) {
        if (size != other.size) {
            cout << "Cannot compare vectors of different sizes." << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            if (arr[i] != other.arr[i]) {
                cout << "The two vectors are not the same." << endl;
                return;
            }
        }
        cout << "The two vectors are the same." << endl;
    }
};

int main() {
    Vector v1(3);
    Vector v2(3);

    cout << "Vector 1:" << endl;
    v1.setvalues();
    cout << "Vector 2:" << endl;
    v2.setvalues();

    v1.addition(v2);
    v1.subtraction(v2);
    v1.lessthan(v2);
    v1.greaterthan(v2);
    v1.equalornot(v2);

    return 0;
}
