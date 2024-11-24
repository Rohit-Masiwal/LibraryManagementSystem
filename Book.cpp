// src/Book.cpp
#include "Book.h"

// Constructor
Book::Book(const std::string& title, const std::string& author)
    : title(title), author(author), isAvailable(true) {}

// Getter for book title
std::string Book::getTitle() const {
    return title;
}

// Getter for book author
std::string Book::getAuthor() const {
    return author;
}

// Getter for availability status
bool Book::getAvailability() const {
    return isAvailable;
}

// Borrow the book (mark as unavailable)
void Book::borrow() {
    if (isAvailable) {
        isAvailable = false;
    }
}

// Return the book (mark as available)
void Book::returnBook() {
    isAvailable = true;
}
