//
// Created by zsfranko on 21/11/2018.
//

#ifndef INC_4W2_MENTOR_H
#define INC_4W2_MENTOR_H


#include <iostream>
#include "Person.h"

enum class Level {

    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {

public:

    Mentor(std::string name, int age, Gender gender, Level level);

    Mentor();

    std::string getLevel();

    void getGoal() override;

    void introduce() override;

private:
    Level _level;
};


#endif //INC_4W2_MENTOR_H
