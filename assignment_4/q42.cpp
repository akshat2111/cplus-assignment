#include<iostream>
using namespace std;

class Table {
    int rows, cols;
    int** data;

public:
    // Constructor to initialize a table with the given dimensions
    Table(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    // Destructor to release memory
    ~Table() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Overload [] operator to access elements using t[i][j]
    int* operator[](int index) {
        return data[index];
    }

    // Overload >> operator for input
    friend istream& operator>>(istream& is, Table& t) {
        for (int i = 0; i < t.rows; i++) {
            for (int j = 0; j < t.cols; j++) {
                is >> t.data[i][j];
            }
        }
        return is;
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream& os, const Table& t) {
        for (int i = 0; i < t.rows; i++) {
            for (int j = 0; j < t.cols; j++) {
                os << t.data[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }

    // Overload = operator for deep copy
    Table& operator=(const Table& t) {
        if (this != &t) {
            for (int i = 0; i < rows; i++) {
                delete[] data[i];
            }
            delete[] data;

            rows = t.rows;
            cols = t.cols;
            data = new int*[rows];
            for (int i = 0; i < rows; i++) {
                data[i] = new int[cols];
                for (int j = 0; j < cols; j++) {
                    data[i][j] = t.data[i][j];
                }
            }
        }
        return *this;
    }
};

int main() {
    Table t(4, 5), t1(4, 5);
    
    // Input values into the table
    cin >> t;

    // Modify an element
    t[0][0] = 5;

    // Access an element
    int x = t[2][3];

    // Assign t to t1
    t1 = t;

    // Output both tables
    cout << t << "\n" << t1;

    return 0;
}


