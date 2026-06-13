// ================================================
// Program 6: Operator Overloading
// Write a C++ program to overload operators
// +, -, *, ==, ++ for a Complex Number class
// ================================================

#include<iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload +
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload -
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload *
    Complex operator*(const Complex& c) {
        return Complex(real*c.real - imag*c.imag,
                       real*c.imag + imag*c.real);
    }

    // Overload == (equality check)
    bool operator==(const Complex& c) {
        return (real == c.real && imag == c.imag);
    }

    // Overload ++ (prefix increment)
    Complex operator++() {
        real++; imag++;
        return *this;
    }

    // Overload << (display)
    friend ostream& operator<<(ostream& out, const Complex& c) {
        if(c.imag >= 0)
            out << c.real << " + " << c.imag << "i";
        else
            out << c.real << " - " << (-c.imag) << "i";
        return out;
    }

    // Overload >> (input)
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: "; in >> c.real;
        cout << "Enter imag part: "; in >> c.imag;
        return in;
    }
};

int main() {
    Complex c1, c2;
    cout << "Enter Complex Number 1:\n"; cin >> c1;
    cout << "Enter Complex Number 2:\n"; cin >> c2;

    cout << "\nc1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    cout << "\nc1 + c2 = " << (c1 + c2) << endl;
    cout << "c1 - c2 = " << (c1 - c2) << endl;
    cout << "c1 * c2 = " << (c1 * c2) << endl;
    cout << "c1 == c2? " << (c1 == c2 ? "Yes" : "No") << endl;

    ++c1;
    cout << "After ++c1: " << c1 << endl;

    return 0;
}
