//
// Created by zsfranko on 14/11/2018.
//

#include "blogPost.h"
#include <iostream>

blogPost::blogPost() {
    _authorName = "John Doe";
    _date = "2000.05.04.";
    _text = "Lorem ipsum dolor sit amet.";
    _title = "Lorem ipsum";
}

blogPost::blogPost(std::string authorName, std::string title, std::string text, std::string date) {
    _authorName = authorName ;
    _date = date;
    _text = text;
    _title = title;
}

void blogPost::getInfo() {

    std::cout << " " << _title;
    std::cout << "titled by" << _authorName;
    std::cout << "posted at" << _date << std::endl;
    std::cout << " " << _authorName << std::endl;

}