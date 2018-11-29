//
// Created by zsfranko on 29/11/2018.
//

#ifndef INC_02_GARDEN_APPLICATION_TREE_H
#define INC_02_GARDEN_APPLICATION_TREE_H
#include <iostream>
#include "Plants.h"

class Trees : public Plants {
public:
    Trees(std::string color);

    bool needWater() override;

};


#endif //INC_02_GARDEN_APPLICATION_TREE_H
