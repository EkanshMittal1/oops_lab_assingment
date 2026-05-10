#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    
    void updateCGPA(float newCgpa) {
        cgpa = newCgpa;
    }

public:
    
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateHostel(string newHostel) {
        hostel = newHostel;
    }

    void modifyCGPA(float newCgpa) {
        updateCGPA(newCgpa);  
    }

    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();

    s.modifyCGPA(9.2);
    s.updateHostel("BH-3");

    cout << "\nAfter Update:\n";
    s.displayDetails();

    return 0;
}
