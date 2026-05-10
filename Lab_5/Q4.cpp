#include <iostream>
using namespace std;

// Base Class
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

// Single Inheritance
class B : public A {
public:
    void showB() {
        cout << "Single Inheritance: Class B\n";
    }
};

// Multiple Inheritance
class C {
public:
    void showC() {
        cout << "Class C\n";
    }
};

class D : public A, public C {
public:
    void showD() {
        cout << "Multiple Inheritance: Class D\n";
    }
};

// Multilevel Inheritance
class E : public B {
public:
    void showE() {
        cout << "Multilevel Inheritance: Class E\n";
    }
};

// Hierarchical Inheritance
class F : public A {
public:
    void showF() {
        cout << "Hierarchical Inheritance: Class F\n";
    }
};

class G : public A {
public:
    void showG() {
        cout << "Hierarchical Inheritance: Class G\n";
    }
};

// Hybrid Inheritance
class H : public F, public G {
public:
    void showH() {
        cout << "Hybrid Inheritance: Class H\n";
    }
};

int main() {

    B b;
    b.showA();
    b.showB();

    D d;
    d.showA();
    d.showC();
    d.showD();

    E e;
    e.showA();
    e.showB();
    e.showE();

    F f;
    G g;
    f.showA();
    f.showF();
    g.showA();
    g.showG();

    H h;
    // h.showA(); Ambiguity (A comes via F and G)
    h.showF();
    h.showG();
    h.showH();

    return 0;
}