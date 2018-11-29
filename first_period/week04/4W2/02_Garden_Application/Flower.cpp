//
// Created by zsfranko on 29/11/2018.
//
#include <iostream>
#include "Flower.h"


Flowers::Flowers(std::string color) {
    _color = color;
    _waterLevel = 0;
}

bool Flowers::needWater() {
    if (_waterLevel < 5) {
        std::cout << "The " << _color << " Flower needs water." << std::endl;
        return true;
    } else {
        std::cout << "The " << _color << " Flower doesnt need water" << std::endl;
        return false;
    }
}