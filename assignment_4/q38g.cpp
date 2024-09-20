#include<iostream>
#include<cmath>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    
    
    friend ostream& operator<<(ostream &os, const Complex &c) // Overloading << operator for outputting complex numbers
    {
        if (c.imag >= 0)
            os << c.real << " + " << c.imag << "i";
        else
            os << c.real << " - " << -c.imag << "i";
        return os;
    }
};

class Quadratic {
    float a, b, c;
    
public:
    Quadratic(float x = 0, float y = 0, float z = 0) : a(x), b(y), c(z) {} // Default constructor (null polynomial)

    friend istream& operator>>(istream &is, Quadratic &q) // Overloading >> operator to input polynomial coefficients
    {
        cout << "Enter coefficients a, b, and c: ";
        is >> q.a >> q.b >> q.c;
        return is;
    }

    friend ostream& operator<<(ostream &os, const Quadratic &q)     // Overloading << operator to output the polynomial
    {
        os << q.a << "x^2 + " << q.b << "x + " << q.c;
        return os;
    }

    Quadratic operator+(const Quadratic &q)   
    {
        return Quadratic(a + q.a, b + q.b, c + q.c);
    }

    float evaluate(float x) {
        return a * x * x + b * x + c;
    }

    void computeRoots() {
        float discriminant = b * b - 4 * a * c;

        if (discriminant > 0) { 
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct: " << root1 << ", " << root2 << endl;
        } 
        else if (discriminant == 0) {
            float root = -b / (2 * a);
            cout << "Roots are real and equal: " << root << endl;
        } 
        else {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-discriminant) / (2 * a);
            Complex root1(realPart, imaginaryPart);
            Complex root2(realPart, -imaginaryPart);
            cout << "Roots are complex: " << root1 << " and " << root2 << endl;
        }
    }
};

int main() {
    Quadratic q1, q2;
 
    cin >> q1 >> q2;

    Quadratic q3 = q1 + q2;
    cout << "Sum of the polynomials: " << q3 << endl;
    
    float x;
    cout << "Enter value of x to evaluate polynomial: ";
    cin >> x;
    cout << "Polynomial value at x = " << x << " is: " << q3.evaluate(x) << endl;

    q1.computeRoots();

    return 0;
}
