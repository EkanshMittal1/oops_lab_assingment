#include <iostream>
using namespace std;

class Base {
protected:
    int x;
};

class Derived : public Base {
public:
    void setValue(int a) {
        x = a;
    }
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Derived d;
    d.setValue(10);
    d.display();
}