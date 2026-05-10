#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("alpha.txt", ios::binary);

    fin.seekg(0, ios::end);
    cout << "File size: " << fin.tellg() << " bytes";

    fin.close();
    return 0;
}