#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float cgpa;
    void updateCgpa(float newCgpa) {
        cgpa = newCgpa;
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Cgpa: ";
        cin >> cgpa;
    }

    
    void modifyCgpa(float newCgpa) {
        updateCgpa(newCgpa);   
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Cgpa: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.modifyCgpa(9.5);   
    s.displayDetails();


    return 0;
}
