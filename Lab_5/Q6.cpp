#include <iostream>
using namespace std;

class Book {
protected:
    string title, author;
    float price;

public:
    void setBook(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void displayBook() {
        cout << title << " " << author << " " << price << endl;
    }
};

class Textbook : public Book {
    string subject;

public:
    void setTextbook(string t, string a, float p, string s) {
        setBook(t, a, p);
        subject = s;
    }

    void displayTextbook() {
        displayBook();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook t;
    t.setTextbook("Math", "Author1", 500, "Algebra");
    t.displayTextbook();
}