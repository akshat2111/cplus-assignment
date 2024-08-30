#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Book {
    string isbn;
    string title;
    vector<string> authors;
    double price;

public:
    // Constructor to initialize a Book
    Book(string isbn, string title, vector<string> authors, double price)
        : isbn(isbn), title(title), authors(authors), price(price) {}

    // Getter for ISBN
    string getISBN() const {
        return isbn;
    }

    // Getter for title
    string getTitle() const {
        return title;
    }

    // Getter for price
    double getPrice() const {
        return price;
    }

    // Print book details
    void printDetails() const {
        cout << "ISBN: " << isbn << ", Title: " << title << ", Authors: ";
        for (const string& author : authors) {
            cout << author << " ";
        }
        cout << ", Price: $" << price << endl;
    }
};
class BookStore {
    unordered_map<string, vector<Book>> inventory;

public:
    // Add a book to the inventory (multiple copies)
    void addBook(const Book& book, int copies) {
        inventory[book.getISBN()].resize(inventory[book.getISBN()].size() + copies, book);
    }

    // Function to return a list of unique ISBN numbers
    vector<string> books() const {
        vector<string> uniqueIsbns;
        for (const auto& pair : inventory) {
            uniqueIsbns.push_back(pair.first);
        }
        return uniqueIsbns;
    }

    // Function to return the number of copies available for a given ISBN
    int noOfCopies(const string& isbn) const {
        auto it = inventory.find(isbn);
        if (it != inventory.end()) {
            return it->second.size();
        }
        return 0;
    }

    // Function to return the total price of all the books
    double totalPrice() const {
        double total = 0.0;
        for (const auto& pair : inventory) {
            if (!pair.second.empty()) {
                total += pair.second[0].getPrice() * pair.second.size();
            }
        }
        return total;
    }

    // Function to print the number of copies and title for each book
    void printBookCopies() const {
        for (const auto& pair : inventory) {
            if (!pair.second.empty()) {
                cout << "Title: " << pair.second[0].getTitle()
                     << ", Copies: " << pair.second.size() << endl;
            }
        }
    }
};
int main() {
    // Create some book instances
    Book book1("123-ABC", "The C++ Programming Language", {"Bjarne Stroustrup"}, 59.99);
    Book book2("456-DEF", "Effective C++", {"Scott Meyers"}, 39.99);
    Book book3("789-GHI", "Clean Code", {"Robert C. Martin"}, 49.99);

    // Create a bookstore and add books with multiple copies
    BookStore store;
    store.addBook(book1, 10); // Add 10 copies of book1
    store.addBook(book2, 5);  // Add 5 copies of book2
    store.addBook(book3, 7);  // Add 7 copies of book3

    // Print number of copies of each book along with its title
    store.printBookCopies();

    // Get and print the list of unique ISBN numbers
    vector<string> isbnList = store.books();
    cout << "Unique ISBNs in the bookstore:" << endl;
    for (const string& isbn : isbnList) {
        cout << isbn << endl;
    }

    // Print the number of copies available for a given ISBN
    string isbnToCheck = "123-ABC";
    cout << "Number of copies for ISBN " << isbnToCheck << ": " << store.noOfCopies(isbnToCheck) << endl;

    // Print the total price of all books in the bookstore
    cout << "Total price of all books in the bookstore: $" << store.totalPrice() << endl;

    return 0;
}