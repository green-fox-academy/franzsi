//
// Created by zsfranko on 13/11/2018.
//

#include "postit.h"
#include <iostream>

PostIt::PostIt() {
    _text = " piskotmali";
    _background = " green";
    _textcolor = " black";
}
PostIt::PostIt(std::string background, std::string text, std::string textcolor){
_text = text;
_background = background;
_textcolor = textcolor;
}

void PostIt::getInfo() {
    std::cout << " Background color:" << _background << std::endl;
    std::cout << " Text:" << _text << std::endl;
    std::cout << " Text Color:" << _textcolor << std::endl;

}
