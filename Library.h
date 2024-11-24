// include/Library.h

#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    // Add a new book to the library
    void addBook(const Book& book);

    // List all books in the library
    void listBooks() const;

    // Search for a book by title
    Book* searchBook(const std::string& title);

    // Borrow a book from the library
    bool borrowBook(const std::string& title);

    // Return a borrowed book to the library
    bool returnBook(const std::string& title);
};

#endif // LIBRARY_H
