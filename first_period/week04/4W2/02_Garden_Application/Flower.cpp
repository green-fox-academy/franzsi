//
// Created by zsfranko on 29/11/2018.
//
#include <iostream>
#include "Flower.h"


Flower::Flower(std::string color, int waterLVL) {
    _color = color;
    _waterLVL = waterLVL;
}

float Flower::getWaterLVL() {
    return _waterLVL;
}

bool Flower::isNeedWater() {
    return _waterLVL < 5;
}

void Flower::water(int givenWater) {
    _waterLVL += givenWater * 0.75;
}

std::string Flower::getType() {
    return "Flower";
}
