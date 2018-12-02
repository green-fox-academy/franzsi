//
// Created by zsfranko on 29/11/2018.
//

#ifndef INC_02_GARDEN_APPLICATION_GARDEN_H
#define INC_02_GARDEN_APPLICATION_GARDEN_H

#include <vector>
#include "Tree.h"
#include "Flower.h"

class Garden {
public:
    Garden();

    void addPlant(Plant *plant);

    void water(int waterAmount);

private:
    std::vector<Plant *> _plants;
};


#endif //INC_02_GARDEN_APPLICATION_GARDEN_H