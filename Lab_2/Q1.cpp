#include<iostream>
#include<string>
using namespace std;

struct Students{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void addDetails(){
        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Roll No: " ;
        cin >> rollNo;

        cout << "Enter Degree " ;
        cin >> degree;

        cout << "Enter Hostel " ;
        cin >> hostel;

        cout << "Enter CGPA " ;
        cin >> cgpa;
    }

    void updateDetails(){

        cout << "Update Name: ";
        cin >> name;

        cout << "Update Roll No: ";
        cin >> rollNo;

        cout << "Update Degree: ";
        cin >> degree;

        cout << "Update Hostel: ";
        cin >> hostel;

        cout << "Update CGPA: ";
        cin >> cgpa;

    }

    void updateCgpa(float newCgpa){
        cgpa = newCgpa;
    }

    void updateHostel(string newHostel){
        hostel = newHostel;
    }

    void displayDetails(){
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }

};

int main () {

    Students s;

    s.addDetails();
    s.displayDetails();

    s.updateCgpa(9.1);
    s.updateHostel("BH-5");

    cout << "\nAfter Updates:\n";
    s.displayDetails();


    return 0;
}