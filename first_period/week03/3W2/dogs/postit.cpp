//
// Created by zsfranko on 13/11/2018.
//

#include "postit.h"
#include <iostream>

Dogs::Dogs() {
    _dogname = "dogname";
    _age = "age";
    _color = "color";
}
Dogs::Dogs(std::string dogname, int age, std::string color){
_dogname = dogname;
_age = age;
_color = color;
}

void Dogs::printDogs() {
    std::cout << "Dogname:" << _dogname << std::endl;;
    std::cout << "Age" << _age << std::endl;;
    std::cout << "Color" << _color << std::endl;

}
