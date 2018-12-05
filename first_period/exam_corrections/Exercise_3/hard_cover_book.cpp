//
// Created by zsfranko on 05/12/2018.
//

#include "hard_cover_book.h"
#include <iostream>

HardCoverBook::HardCoverBook(const std::string &title, const std::string &author, int releaseYear, int pageNumber)
        : Book(title, author, releaseYear, pageNumber, 100)
{

}
