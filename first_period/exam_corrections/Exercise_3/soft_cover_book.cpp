//
// Created by zsfranko on 05/12/2018.
//

#include "soft_cover_book.h"

SoftCoverBook::SoftCoverBook(const std::string &title, const std::string &author, int releaseYear, int pageNumber)
        : Book(title, author, releaseYear, pageNumber, 20)
{

}