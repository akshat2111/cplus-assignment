#include<iostream>
using namespace std;

class IntArray {
    int* arr;  // Pointer to hold the array
    int size;  // Size of the array

public:
   
    IntArray(int s) {
        size = s;
        arr = new int[size];  
    }

    
    ~IntArray() {
        delete[] arr;
    }

    
    int& operator[](int index) // Overload [] operator
    {
        if (index < 0 || index >= size) {
            cout << "Array index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }

    friend ostream& operator<<(ostream &os, const IntArray &ia) // Overload <<operator to print array elements
    {
        for (int i = 0; i < ia.size; i++) {
            os << ia.arr[i] << " ";
        }
        return os;
    }
};

int main() {
    IntArray i(10);  // Create an IntArray of size 10

    for (int k = 0; k < 10; k++)
        i[k] = k;

    cout << i << endl;

    return 0;
}