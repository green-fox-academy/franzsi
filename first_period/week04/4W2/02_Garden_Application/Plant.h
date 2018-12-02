#ifndef INC_02_GARDEN_GARDEN_H
#define INC_02_GARDEN_GARDEN_H

#include <iostream>
#include <vector>
#include <string>


class Plant {
public:
    virtual float getWaterLVL() = 0;

    virtual bool isNeedWater() = 0;

    virtual void water(int givenWater) = 0;

    virtual std::string getType() = 0;

protected:
    std::string _color;
    float _waterLVL;
};

#endif //INC_02_PLANT_APPLICATION_TREE_H