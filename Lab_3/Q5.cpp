#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle rect[n];

    for(int i = 0; i < n; i++) {
        int l, w;
        cout << "\nRectangle " << i+1 << endl;
        cout << "Enter length and width: ";
        cin >> l >> w;
        rect[i].setData(l, w);
    }

    cout << "\nAreas:\n";
    for(int i = 0; i < n; i++) {
        cout << "Rectangle " << i+1 << ": " << rect[i].area() << endl;
    }

    return 0;
}
