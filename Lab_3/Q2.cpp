#include <iostream>
using namespace std;

class B; 

class A {
    int x;
public:
    A(int a) { x = a; }

    friend void swap(A &, B &);

    void show() {
        cout << "Value of A: " << x << endl;
    }
};

class B {
    int y;
public:
    B(int b) { y = b; }

    friend void swap(A &, B &);

    void show() {
        cout << "Value of B: " << y << endl;
    }
};

void swap(A &obj1, B &obj2) {
    int temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Before Swap:\n";
    obj1.show();
    obj2.show();

    swap(obj1, obj2);

    cout << "\nAfter Swap:\n";
    obj1.show();
    obj2.show();

    return 0;
}
