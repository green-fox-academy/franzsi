//
// Created by zsfranko on 05/12/2018.
//

#ifndef EXERCISE_3_HARD_COVER_BOOK_H
#define EXERCISE_3_HARD_COVER_BOOK_H

#include "book.h"

class HardCoverBook : public Book
{
public:
    HardCoverBook(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

};

#endif //EXERCISE_3_HARD_COVER_BOOK_H
