//
// Created by zsfranko on 14/11/2018.
//

#ifndef INC_04_ANIMALS_ANIMALS_H
#define INC_04_ANIMALS_ANIMALS_H
#include <iostream>



class Animals {

private:
    int _hunger;
    int _thirsty;

public:
    Animals();

    Animals(int hunger, int thirsty);

    void eat();

    void drink();

    void play();

    void Animals::getInfo();
    std::cout << "Hunger: " << _hunger << std::endl;
    std::cout << "Thirst: " << _thirsty << std::endl;

};


#endif //INC_04_ANIMALS_ANIMALS_H
