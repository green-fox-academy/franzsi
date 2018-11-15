//
// Created by zsfranko on 14/11/2018.
//

#include "Animals.h"
#include <iostream>

Animals::Animals(){
    _hunger = 50;
    _thirsty = 50;
}

Animals::Animals(int hunger, int thirsty) {
    _hunger = hunger;
    _thirsty = thirsty;
}

void Animals::eat(){
    _hunger++;
}

void Animals::drink() {}() {
    _thirsty++;
}

void Animals::play() {
    _hunger--;
    _thirsty--;
}

void Animals::getInfo() {
    std::cout << "Hunger:" << _hunger << std::endl;
    std::cout << "Thirsty:" << _thirsty << std::endl;
}