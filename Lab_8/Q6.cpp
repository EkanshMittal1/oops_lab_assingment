#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[100];
    int top;
public:
    Stack() { top = -1; }

    void push(T x) {
        arr[++top] = x;
    }

    void pop() {
        if(top >= 0)
            cout << "Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
}