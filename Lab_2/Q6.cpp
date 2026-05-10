#include <iostream>

int x = 100;

class Demo {
public:
    static int count;   

    void show();        
};

void Demo::show() {
    std::cout << "Function defined outside the class" << std::endl;
}

int Demo::count = 5;

int main() {
    int x = 50;

    std::cout << "Local x: " << x << std::endl;
    std::cout << "Global x: " << ::x << std::endl;

    Demo d;
    d.show();

    std::cout << "Static count: " << Demo::count << std::endl;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    return 0;
}
