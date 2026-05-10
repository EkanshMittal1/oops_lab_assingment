#include <iostream>
using namespace std;

class A {
    int x = 50;

    friend class B;   
};

class B {
public:
    void show(A obj) {
        cout << "Value of x: " << obj.x << endl;
    }
};

int main() {
    A obj1;
    B obj2;

    obj2.show(obj1);

    return 0;
}
