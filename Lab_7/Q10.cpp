#include <iostream>
using namespace std;

class Student {
    int id;
public:
    friend istream& operator>>(istream &in, Student &s) {
        in >> s.id;
        return in;
    }

    friend ostream& operator<<(ostream &out, Student &s) {
        out << s.id;
        return out;
    }
};