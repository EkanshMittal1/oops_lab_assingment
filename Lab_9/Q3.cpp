#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    char ch;
    while(fin.get(ch)) {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File copied successfully.\n";
    return 0;
}