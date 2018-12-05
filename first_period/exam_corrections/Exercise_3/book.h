//
// Created by zsfranko on 05/12/2018.
//

#ifndef EXERCISE_3_BOOK_H
#define EXERCISE_3_BOOK_H

#include <string>

class Book
{
public:
    Book(const std::string &title, const std::string &author, int releaseYear, int pageNumber, int coverWeight);

    std::string info();

    const std::string &getAuthor() const;
    int getPageNumber() const;
    int getWeight() const;

private:
    std::string _title;
    std::string _author;
    int _releaseYear;
    int _pageNumber;
    int _weight;
};

#endif //EXERCISE_3_BOOK_H



