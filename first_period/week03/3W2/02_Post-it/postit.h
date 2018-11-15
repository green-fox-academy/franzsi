//
// Created by zsfranko on 13/11/2018.
//

#ifndef INC_02_POST_IT_POSTIT_H
#define INC_02_POST_IT_POSTIT_H

#include <iostream>

class PostIt {
private:
    std::string _background;
    std::string _text;
    std::string _textcolor;
public:
    PostIt ();
    PostIt (std::string background, std::string text, std::string textcolor);
    void printPostIt ();

};


#endif //INC_02_POST_IT_POSTIT_H
