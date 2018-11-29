//
// Created by zsfranko on 20/11/2018.
//
#include <iostream>
#include "Person.h"

Person::Person(std::string name, int age, Gender gender) {
    _name = name;
    _age = age;
    _gender = gender;
}

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

std::string Person::getGender() {

    if (_gender == Gender::FEMALE) {
        return "FEMALE";
    } else {
        return "MALE";
    }
}
void Person::introduce() {
    std::cout << "Bonjour, I am" << _name << " ,a " << _age << "years old " << getGender() << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}