#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float r) { this->r = r; }

    void area() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
    void display() {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float l, float b) {
        this->l = l; this->b = b;
    }

    void area() {
        cout << "Area of Rectangle: " << l * b << endl;
    }
    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};

class Triangle : public Shape {
    float b, h;
public:
    Triangle(float b, float h) {
        this->b = b; this->h = h;
    }

    void area() {
        cout << "Area of Triangle: " << 0.5 * b * h << endl;
    }
    void display() {
        cout << "Shape: Triangle" << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4,6);
    Triangle t(3,7);

    s = &c; s->display(); s->area();
    s = &r; s->display(); s->area();
    s = &t; s->display(); s->area();
}