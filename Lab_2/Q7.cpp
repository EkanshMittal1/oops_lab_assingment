#include <iostream>

namespace First {
    int value = 10;

    void show() {
        std::cout << "First Namespace Value: " << value << std::endl;
    }
}

namespace Second {
    int value = 20;

    void show() {
        std::cout << "Second Namespace Value: " << value << std::endl;
    }
}

int main() {

    First::show();
    Second::show();

    std::cout << "First value: " << First::value << std::endl;
    std::cout << "Second value: " << Second::value << std::endl;

    return 0;
}
