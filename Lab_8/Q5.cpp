#include <iostream>
using namespace std;

template <class T>
void process(T a) {
    cout << "One param: " << a << endl;
}

template <class T>
void process(T a, T b) {
    cout << "Two same type: " << a << " " << b << endl;
}

template <class T, class U>
void process(T a, U b) {
    cout << "Different types: " << a << " " << b << endl;
}

int main() {
    process(5);
    process(5,10);
    process(5,3.14);
}