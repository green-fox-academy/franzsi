//
// Created by zsfranko on 10/12/2018.
//

#ifndef INC_7W1_CARD_H
#define INC_7W1_CARD_H

#include<iostream>

enum class Color{
    CLUB,
    DIAMOND,
    HEART,
    SPADE
};

enum class Number{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JUMBO,
    QUEEN,
    KING,
    ACE

};

class Card
{

public:
    void getCard();

private:


};


#endif //INC_7W1_CARD_H
