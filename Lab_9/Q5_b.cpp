#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("num.txt", ios::in | ios::out);

    file.seekp(4); 
    file.put('X'); 

    file.close();
    return 0;
}