#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author, ISBN;

    Book() {
        title = "";
        author = "";
        ISBN = "";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

int main() {

    Book b1("C++", "Bjarne", "101");
    Book b2 = b1;   // Copy constructor

    cout << b2.title << " "
         << b2.author << " "
         << b2.ISBN << endl;

    return 0;
}
