#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;

public:
    Account(long accNo, double bal)
        : accountNumber(accNo), balance(bal) {
        transactionID = 0;
    }

    long depositAmount(const long &to,
                       const long &from,
                       const double &amount) {
        balance += amount;
        transactionType = "Credit";
        transactionID++;
        return transactionID;
    }

    long creditAmount(const long &to,
                      const long &from,
                      const double &amount) {
        balance -= amount;
        transactionType = "Debit";
        transactionID++;
        return transactionID;
    }

    void displayDetails() const {
        cout << "Account: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Last Transaction: "
             << transactionType << endl;
    }
};

int main() {
    Account a1(1001, 5000);
    a1.depositAmount(1001, 1002, 1000);
    a1.creditAmount(1001, 1002, 500);
    a1.displayDetails();
}
