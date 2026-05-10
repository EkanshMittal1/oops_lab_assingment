#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;
};

class Library {
private:
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }

    bool addNewBook(const string &title,
                    const string &author,
                    const string &ISBN) {

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(const string &ISBN);

    void displayDetails() {
        for(int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library::removeBooks(const string &ISBN) {
    for(int i = 0; i < count; i++) {
        if(books[i].ISBN == ISBN) {
            books[i] = books[count - 1];
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library lib;

    lib.addNewBook("C++", "Bjarne", "101");
    lib.addNewBook("Java", "James", "102");
    lib.addNewBook("Python", "Guido", "103");
    lib.addNewBook("OS", "Silberschatz", "104");
    lib.addNewBook("DBMS", "Navathe", "105");

    lib.removeBooks("103");

    lib.displayDetails();
}
