#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) { value = v; }

    void display() {
        cout << "Value: " << value << endl;
    }

    friend Number add(Number, Number);
};

Number add(Number n1, Number n2) {   
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;                    
}

int main() {
    Number obj1(10), obj2(20);

    Number result = add(obj1, obj2);
    result.display();

    return 0;
}
