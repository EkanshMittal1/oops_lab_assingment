#include <iostream>
#include <fstream>
using namespace std;

int countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while(fin.get(ch)) {
        if(isalpha(ch))
            count++;
    }

    fin.close();
    return count;
}

int main() {
    cout << "Number of alphabets: " << countAlphabets();
    return 0;
}