//
// Created by zsfranko on 20/11/2018.
//

#ifndef INC_4W2_PERSON_H
#define INC_4W2_PERSON_H

#include <string>

enum class Gender {

    MALE,
    FEMALE
};

class Person {
public:

    Person(std::string name, int age, Gender gender);

    Person();

    std::string getGender();

    virtual void introduce();

    virtual void getGoal();


protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //INC_4W2_PERSON_H
