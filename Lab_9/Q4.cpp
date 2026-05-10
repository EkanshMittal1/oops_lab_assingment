#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length: " << str.length() << endl;

    ofstream fout("data.txt");
    fout << str;
    fout.close();

    ifstream fin("data.txt");
    char ch;

    cout << "File content: ";
    while(fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}