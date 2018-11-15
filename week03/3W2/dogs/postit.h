//
// Created by zsfranko on 13/11/2018.
//

#ifndef INC_02_POST_IT_POSTIT_H
#define INC_02_POST_IT_POSTIT_H

#include <iostream>

class Dogs {
private:
    std::string _dogname;
    int _color;
    std::string _age;
public:
    Dogs ();
    Dogs (std::string dogname, int age, std::string color);
    void printDogs ();

};


#endif //INC_02_POST_IT_POSTIT_H
