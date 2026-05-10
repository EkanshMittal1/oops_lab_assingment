#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;
};

class Staff : virtual public Person {
protected:
    int emp_id;
};

class Student : virtual public Person {
protected:
    int student_id;
};

class TeachingAssistant : public Staff, public Student {
public:
    void setData(string n, string a, int e, int s) {
        name = n;
        address = a;
        emp_id = e;
        student_id = s;
    }

    void display() {
        cout << name << " " << address << endl;
        cout << "Emp ID: " << emp_id << endl;
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.setData("Abhi", "Patiala", 101, 202);
    ta.display();
}