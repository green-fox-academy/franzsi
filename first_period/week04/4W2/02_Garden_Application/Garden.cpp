//
// Created by zsfranko on 29/11/2018.
//
#include <iostream>
#include "Garden.h"

Garden::Garden() {
std::cout << "I am making a Garden" << std::endl;
}

void Garden::water(int waterAmount) {
    int needwater = 0;
    for (int i = 0; i < _plants.size(); i++) {
        if (_plants[i]->isNeedWater()) {
            needwater++;
        }
    }
    for (int j = 0; j < _plants.size(); j++) {
        if (_plants[j]->isNeedWater()) {
            _plants[j]->water(waterAmount / needwater);
        }
    }
}

void Garden::addPlant(Plant *plant) {
    _plants.push_back(plant);
}
