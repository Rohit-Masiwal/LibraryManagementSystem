// src/main.cpp
#include <iostream>
#include <string>
#include "Library.h"
#include "Book.h"

int main() {
    // Create a Library object
    Library library;

    // Add books to the library
    library.addBook(Book("The Catcher in the Rye", "J.D. Salinger"));
    library.addBook(Book("1984", "George Orwell"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));

    // List all books
    std::cout << "Library Books:\n";
    library.listBooks();

    // Borrow a book
    std::cout << "\nBorrowing '1984':\n";
    if (library.borrowBook("1984")) {
        std::cout << "Successfully borrowed '1984'.\n";
    } else {
        std::cout << "'1984' is not available.\n";
    }

    // List all books after borrowing
    std::cout << "\nLibrary Books after borrowing '1984':\n";
    library.listBooks();

    // Return a book
    std::cout << "\nReturning '1984':\n";
    if (library.returnBook("1984")) {
        std::cout << "Successfully returned '1984'.\n";
    } else {
        std::cout << "'1984' was not borrowed.\n";
    }

    // List all books after returning
    std::cout << "\nLibrary Books after returning '1984':\n";
    library.listBooks();

    return 0;
}
