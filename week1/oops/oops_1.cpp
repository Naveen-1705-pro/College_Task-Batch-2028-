#include <iostream>
#include <string>
using namespace std;

// Interface
class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
    virtual ~LibraryUser() {}
};

// KidUser Class
class KidUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() override {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// AdultUser Class
class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() override {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        } else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main() {
    // Test Case #1 - KidUser
    KidUser kid;

    cout << "----- Kid User Test Case -----" << endl;

    kid.age = 10;
    cout << "Age = 10" << endl;
    kid.registerAccount();

    kid.age = 18;
    cout << "\nAge = 18" << endl;
    kid.registerAccount();

    kid.bookType = "Kids";
    cout << "\nBook Type = Kids" << endl;
    kid.requestBook();

    kid.bookType = "Fiction";
    cout << "\nBook Type = Fiction" << endl;
    kid.requestBook();

    // Test Case #2 - AdultUser
    AdultUser adult;

    cout << "\n\n----- Adult User Test Case -----" << endl;

    adult.age = 5;
    cout << "Age = 5" << endl;
    adult.registerAccount();

    adult.age = 23;
    cout << "\nAge = 23" << endl;
    adult.registerAccount();

    adult.bookType = "Kids";
    cout << "\nBook Type = Kids" << endl;
    adult.requestBook();

    adult.bookType = "Fiction";
    cout << "\nBook Type = Fiction" << endl;
    adult.requestBook();

    return 0;
}