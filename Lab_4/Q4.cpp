#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    Sample(int val = 0) {
        x = val;
        cout << "Constructor Called\n";
    }

    ~Sample() {
        cout << "Destructor Called\n";
    }
};

int main() {

    
    int *pInt = new int;
    *pInt = 100;
    cout << "Integer: " << *pInt << endl;
    delete pInt;

    
    float *pFloat = new float;
    *pFloat = 5.5;
    cout << "Float: " << *pFloat << endl;
    delete pFloat;

   
    int *arrInt = new int[3];
    arrInt[0] = 1; arrInt[1] = 2; arrInt[2] = 3;

    cout << "Integer Array: ";
    for(int i = 0; i < 3; i++)
        cout << arrInt[i] << " ";
    cout << endl;

    delete[] arrInt;

    
    float *arrFloat = new float[2];
    arrFloat[0] = 2.2;
    arrFloat[1] = 3.3;

    cout << "Float Array: ";
    for(int i = 0; i < 2; i++)
        cout << arrFloat[i] << " ";
    cout << endl;

    delete[] arrFloat;

    
    Sample *obj = new Sample(50);
    cout << "Object Value: " << obj->x << endl;
    delete obj;

    
    Sample *objArr = new Sample[2];
    delete[] objArr;

    return 0;
}
