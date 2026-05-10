#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void setData(int roll, string name) {
        this->roll = roll;  
        this->name = name;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;

    
    Student *ptr = &s1;

    ptr->setData(367, "Ekansh");   
    (*ptr).display();                 

    return 0;
}
