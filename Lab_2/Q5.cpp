#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex addComplex(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(3.5, 2.5);
    c2.setComplex(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    c3 = c1.addComplex(c2);

    cout << "Sum of Complex Numbers: ";
    c3.displayComplex();

    return 0;
}
