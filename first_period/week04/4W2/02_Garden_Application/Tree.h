//
// Created by zsfranko on 29/11/2018.
//

#ifndef INC_02_GARDEN_APPLICATION_TREE_H
#define INC_02_GARDEN_APPLICATION_TREE_H
#include <iostream>
#include "Plant.h"


class Tree : public Plant {
public:
    Tree(std::string color, int waterLVL);

    float getWaterLVL() override;

    bool isNeedWater() override;

    void water(int givenWater) override;

    std::string getType();
};
#endif //INC_02_GARDEN_APPLICATION_TREE_H
