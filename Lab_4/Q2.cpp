#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float breadth;

public:
    
    Rectangle(float l = 0, float b = 0) {
        length = l;
        breadth = b;
        cout << "Constructor Called\n";
    }

    float area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor Called\n";
    }
};

int main() {
    
    Rectangle rect[3] = {
        Rectangle(),       
        Rectangle(10),      
        Rectangle(10, 5)    
    };

    cout << "\nAreas:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Rectangle " << i+1 << ": " << rect[i].area() << endl;
    }

    return 0;
}
