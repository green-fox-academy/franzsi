//
// Created by zsfranko on 21/11/2018.
//
#include <iostream>
#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganisation) {

    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganisation = previousOrganisation;
    _skippedDays = 0;

}

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrganisation = "The School of Life";
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior developer." << std::endl;

}

void Student::introduce() {
    std::cout << "Bonjour, I am" << _name << " ,a " << _age << "years old " << getGender() << "from"
              << _previousOrganisation << "who skipped" << _skippedDays << "from the school already." << std::endl;
}

void Student::skipDays(int numberOfTheDays){
    _skippedDays = _skippedDays + numberOfTheDays;
}
