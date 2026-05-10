#include <iostream>
#include <cmath>
using namespace std;

float area(float base, float height) {
    return 0.5 * base * height;
}

float area(float side) {
    return (sqrt(3)/4) * side * side;
}

float area(float equalSide, float base, bool iso) {
    float height = sqrt(equalSide*equalSide - (base*base)/4);
    return 0.5 * base * height;
}

int main() {
    cout << "Right: " << area(3,4) << endl;
    cout << "Equilateral: " << area(5) << endl;
    cout << "Isosceles: " << area(5,6,true) << endl;
}