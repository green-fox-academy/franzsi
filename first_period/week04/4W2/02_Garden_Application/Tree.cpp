//
// Created by zsfranko on 29/11/2018.
//

#include <iostream>
#include <vector>
#include "Tree.h"
#include "Plants.h"


Trees::Trees(std::string color) {
    _color = color;
    _waterLevel = 0;
}

bool Trees::needWater() {
    if (_waterLevel < 10) {
        std::cout << "The " << _color << " Tree needs water." << std::endl;
        return true;
    } else {
        std::cout << "The " << _color << " Tree doesnt needs water" << std::endl;
        return false;
    }
}