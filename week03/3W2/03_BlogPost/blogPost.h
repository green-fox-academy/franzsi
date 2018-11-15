//
// Created by zsfranko on 14/11/2018.
//

#ifndef UNTITLED_BLOGPOST_H
#define UNTITLED_BLOGPOST_H

#include <iostream>
#include <string>


class blogPost {
private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _date;

public:
    blogPost();
    blogPost(std::string authorName, std::string title, std::string text, std::string date);
    void getInfo();


};


#endif //UNTITLED_BLOGPOST_H
