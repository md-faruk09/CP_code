#include <bits/stdc++.h>
using namespace std;

class Book {
public:
    string title, author, isbn;
    bool issued;

    Book() {}

    Book(string t, string a, string i, string status) {
        title = t;
        author = a;
        isbn = i;
        issued = (status == "Issued");
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void issueBook(string isbn) {
        for (auto &b : books) {
            if (b.isbn == isbn) {
                if (!b.issued) {
                    b.issued = true;
                    cout << "Book issued: " << b.title << '\n';
                } else {
                    cout << "Book already issued\n";
                }
                return;
            }
        }
        cout << "Book not found\n";
    }

    void returnBook(string isbn) {
        for (auto &b : books) {
            if (b.isbn == isbn) {
                if (b.issued) {
                    b.issued = false;
                    cout << "Book returned: " << b.title << '\n';
                } else {
                    cout << "Book was not issued\n";
                }
                return;
            }
        }
        cout << "Book not found\n";
    }

    void listBooks() {
        vector<Book> available;

        for (auto b : books) {
            if (!b.issued)
                available.push_back(b);
        }

        sort(available.begin(), available.end(),
             [](Book a, Book b) {
                 return a.title < b.title;
             });

        for (auto b : available) {
            cout << b.title << " by " << b.author
                 << " (Available)\n";
        }
    }
};

int main() {
    int B;
    cin >> B;

    Library lib;

    for (int i = 0; i < B; i++) {
        string title, author, isbn, status;
        cin >> title >> author >> isbn >> status;
        lib.addBook(Book(title, author, isbn, status));
    }

    string op;
    while (cin >> op) {
        if (op == "issue") {
            string isbn;
            cin >> isbn;
            lib.issueBook(isbn);
        }
        else if (op == "return") {
            string isbn;
            cin >> isbn;
            lib.returnBook(isbn);
        }
        else if (op == "list") {
            lib.listBooks();
        }
    }

    return 0;
}