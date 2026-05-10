#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    int& operator[](int i) {
        if(i<0 || i>=5) {
            cout << "Out of bounds\n";
            exit(0);
        }
        return arr[i];
    }
};