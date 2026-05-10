#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex sum(Complex, Complex);
};

Complex sum(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real,
                   c1.imag + c2.imag);
}

int main() {

    Complex c1(3,4);
    Complex c2(5,6);

    Complex result = sum(c1,c2);

    result.display();
}
