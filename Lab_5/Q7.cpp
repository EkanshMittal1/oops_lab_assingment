#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;
public:
    void setSpeed(int s) { speed = s; }
};

class FuelGauge {
protected:
    int fuel;
public:
    void setFuel(int f) { fuel = f; }
};

class Thermometer {
protected:
    int temp;
public:
    void setTemp(int t) { temp = t; }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void display() {
        cout << "Speed: " << speed << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Temperature: " << temp << endl;
    }
};

int main() {
    CarDashboard c;
    c.setSpeed(80);
    c.setFuel(50);
    c.setTemp(30);
    c.display();
}