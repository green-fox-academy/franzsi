#ifndef INC_02_GARDEN_GARDEN_H
#define INC_02_GARDEN_GARDEN_H

#include <iostream>
#include <vector>
#include "Plants.h"
#include "Flowers.h"
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