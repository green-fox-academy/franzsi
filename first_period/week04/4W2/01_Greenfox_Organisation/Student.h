//
// Created by zsfranko on 21/11/2018.
//

#ifndef INC_4W2_STUDENT_H
#define INC_4W2_STUDENT_H

#include <iostream>
#include "Person.h"


class Student : public Person {

public:
    //passing the name and age arguments to the Person class
    //and also initializing the _classroom member
    Student(std::string name, int age, Gender gender, std::string previousOrganisation);
    Student();

    void getGoal() override;
    void introduce() override;

    void skipDays(int numberOfDays);

private:
    std::string _previousOrganisation;
    int _skippedDays;

};

#endif //INC_4W2_STUDENT_H
