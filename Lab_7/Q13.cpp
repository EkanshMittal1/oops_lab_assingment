#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, theta;
public:
    Polar(float r, float theta) {
        this->r = r;
        this->theta = theta;
    }

    operator Cartesian();
};

class Cartesian {
    float x,y;
public:
    Cartesian(float x=0,float y=0) {
        this->x=x; this->y=y;
    }

    void show() {
        cout << "x=" << x << " y=" << y << endl;
    }
};

Polar::operator Cartesian() {
    float x = r * cos(theta);
    float y = r * sin(theta);
    return Cartesian(x,y);
}

int main() {
    Polar p(10,5);
    Cartesian c;
    c = p;
    c.show();
}