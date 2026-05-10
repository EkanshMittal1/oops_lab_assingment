#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
protected:
    int y = 20;
private:
    int z = 30;
};

// Public Inheritance
class PublicDerived : public Base {
public:
    void show() {
        cout << x << " " << y << endl;
    }
};

// Protected Inheritance
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << x << " " << y << endl;
    }
};

// Private Inheritance
class PrivateDerived : private Base {
public:
    void show() {
        cout << x << " " << y << endl;
    }
};

int main() {
    PublicDerived p;
    p.show();

    ProtectedDerived pr;
    pr.show();

    PrivateDerived pv;
    pv.show();
}