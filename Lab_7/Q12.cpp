#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float x) { this->x = x; }

    operator float() {
        return x;
    }
};

int main() {
    Test t(5.5);
    float f = t;
    cout << f;
}