//
// Created by zsfranko on 05/12/2018.
//

#include "book_shelf.h"

void BookShelf::addBook(Book* book)
{
    _books.push_back(book);
}

std::string BookShelf::getAuthorOfLightestBook()
{
    Book* lightest = _books.front();
    for (int i = 1; i < _books.size(); ++i) {
        if(_books[i]->getWeight() < lightest->getWeight()){
            lightest = _books[i];
        }
    }

    return lightest->getAuthor();
}

std::string BookShelf::getAuthorOfLongestBook()
{
    Book* longest = _books.front();
    for (int i = 1; i < _books.size(); ++i) {
        if(_books[i]->getPageNumber() > longest->getPageNumber()){
            longest = _books[i];
        }
    }

    return longest->getAuthor();
}

const std::vector<Book *> &BookShelf::getBooks() const
{
    return _books;
}