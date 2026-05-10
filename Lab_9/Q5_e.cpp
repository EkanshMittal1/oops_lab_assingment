#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("multi.txt");
    fout << "This is a sample file.\nIt has multiple lines.\nEnjoy!";
    fout.close();

    ifstream fin("multi.txt");

    
    fin.seekg(9);

    
    cout << "Current position: " << fin.tellg() << endl;

    
    char ch;
    cout << "Remaining content:\n";
    while(fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}