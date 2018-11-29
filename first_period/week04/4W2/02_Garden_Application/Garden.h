//
// Created by zsfranko on 29/11/2018.
//

#ifndef INC_02_GARDEN_APPLICATION_GARDEN_H
#define INC_02_GARDEN_APPLICATION_GARDEN_H
#include <iostream>


#include <vector>
#include "Plants.h"
#include "Flower.h"
#include "Trees.h"

class Garden {
public:
    Garden();
    void water(int givenWater);
    int getstate(std::vector<Plants *> plantsvector);

    void fillGarden(Plants * plants);

protected:
    std::vector<Plants *> _plantsvector;
    int _givenWater;
};


#endif