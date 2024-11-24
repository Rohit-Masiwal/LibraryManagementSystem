// include/Book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool isAvailable;

public:
    // Constructor
    Book(const std::string& title, const std::string& author);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getAvailability() const;

    // Setters
    void borrow();
    void returnBook();
};

#endif // BOOK_H
