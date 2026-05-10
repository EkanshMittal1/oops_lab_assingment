#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;
};

class Truck : public Vehicle {
protected:
    int load_capacity;
};

class RefrigeratedTruck : public Truck {
    int temperature_control;
public:
    void setData(string mk, string md, int y, int lc, int tc) {
        make = mk;
        model = md;
        year = y;
        load_capacity = lc;
        temperature_control = tc;
    }

    void display() {
        cout << make << " " << model << " " << year << endl;
        cout << "Load: " << load_capacity << endl;
        cout << "Temp Control: " << temperature_control << endl;
    }
};

int main() {
    RefrigeratedTruck r;
    r.setData("Tata", "X1", 2022, 1000, -5);
    r.display();
}