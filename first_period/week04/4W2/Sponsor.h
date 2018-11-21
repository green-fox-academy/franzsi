//
// Created by zsfranko on 21/11/2018.
//

#ifndef INC_4W2_SPONSOR_H
#define INC_4W2_SPONSOR_H

#include <iostream>
#include "Person.h"


class Sponsor : public Person {

public:

    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    std::string hire();

    void getGoal() override;

    void introduce() override;

private:
    std::string _company;
    int _hiredStudents;
};



#endif //INC_4W2_SPONSOR_H
