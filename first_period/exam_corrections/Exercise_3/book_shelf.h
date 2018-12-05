//
// Created by zsfranko on 05/12/2018.
//

#ifndef EXERCISE_3_BOOK_SHELF_H
#define EXERCISE_3_BOOK_SHELF_H

#include <vector>
#include "book.h"

class BookShelf
{
public:
    void addBook(Book* book);
    std::string getAuthorOfLightestBook();
    std::string getAuthorOfLongestBook();

    const std::vector<Book *> &getBooks() const;

private:
    std::vector<Book*> _books;
};

#endif //EXERCISE_3_BOOK_SHELF_H
