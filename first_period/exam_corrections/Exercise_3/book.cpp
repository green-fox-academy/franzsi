//
// Created by zsfranko on 05/12/2018.
//

#include "book.h"
#include <iostream>

Book::Book(const std::string &title, const std::string &author,
           int releaseYear, int pageNumber, int coverWeight) : _title(title), _author(author),
                                                               _releaseYear(releaseYear),
                                                               _pageNumber(pageNumber),
                                                               _weight(10 * pageNumber + coverWeight)
{}

std::string Book::info()
{
    return "Author: " + _author + "\n" +
           "Title: " + _title + "\n" +
           "Release year: " + std::to_string(_releaseYear) + "\n";
}

const std::string &Book::getAuthor() const
{

    return _author;
}

int Book::getPageNumber() const
{
    return _pageNumber;
}

int Book::getWeight() const
{
    return _weight;
}