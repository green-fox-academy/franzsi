//
// Created by zsfranko on 29/11/2018.
//

#ifndef INC_02_GARDEN_APPLICATION_FLOWER_H
#define INC_02_GARDEN_APPLICATION_FLOWER_H

#include <iostream>
#include "Plant.h"

class Flowers : public Plants {
public:
    Flowers(std::string color);

    bool needWater() override;

};

#endif

#endif //INC_02_GARDEN_APPLICATION_FLOWER_H
