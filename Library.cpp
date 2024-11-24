// src/Library.cpp
#include "Library.h"
#include <iostream>

// Add a new book to the library
void Library::addBook(const Book& book) {
    books.push_back(book);
}

// List all books in the library
void Library::listBooks() const {
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle()
                  << ", Author: " << book.getAuthor()
                  << ", Available: " << (book.getAvailability() ? "Yes" : "No") << std::endl;
    }
}

// Search for a book by title
Book* Library::searchBook(const std::string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title) {
            return &book;  // Return a pointer to the book if found
        }
    }
    return nullptr;  // Return nullptr if the book is not found
}

// Borrow a book from the library
bool Library::borrowBook(const std::string& title) {
    Book* book = searchBook(title);
    if (book && book->getAvailability()) {
        book->borrow();
        return true;  // Successfully borrowed the book
    }
    return false;  // Book not available or not found
}

// Return a borrowed book to the library
bool Library::returnBook(const std::string& title) {
    Book* book = searchBook(title);
    if (book && !book->getAvailability()) {
        book->returnBook();
        return true;  // Successfully returned the book
    }
    return false;  // Book is either not borrowed or not found
}
