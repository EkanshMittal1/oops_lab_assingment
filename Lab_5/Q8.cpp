#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name, id;

public:
    void setUser(string n, string i) {
        name = n;
        id = i;
    }
};

class Student : public LibraryUser {
    int grade;
public:
    void setStudent(string n, string i, int g) {
        setUser(n, i);
        grade = g;
    }
    void display() {
        cout << name << " " << id << " Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser {
    string dept;
public:
    void setTeacher(string n, string i, string d) {
        setUser(n, i);
        dept = d;
    }
    void display() {
        cout << name << " " << id << " Dept: " << dept << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudent("Ekansh", "S1", 10);
    t.setTeacher("Mittal", "T1", "OOPS");

    s.display();
    t.display();
}
