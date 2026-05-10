#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float breadth;

public:
    // (a) Default Constructor
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called\n";
    }

    // (b) Two Parameter Constructor
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
        cout << "Two Parameter Constructor Called\n";
    }

    // (c) Single Parameter Constructor
    Rectangle(float side) {
        length = breadth = side;
        cout << "Single Parameter Constructor Called\n";
    }

    float area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Rectangle r1;          
    Rectangle r2(10, 5);   
    Rectangle r3(7);       

    cout << "\nAreas:\n";
    cout << "r1: " << r1.area() << endl;
    cout << "r2: " << r2.area() << endl;
    cout << "r3: " << r3.area() << endl;

    return 0;
}
