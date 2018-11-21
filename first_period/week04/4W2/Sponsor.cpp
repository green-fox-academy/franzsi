//
// Created by zsfranko on 21/11/2018.
//

#include <iostream>
#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) {

    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = 0;

}

Sponsor::Sponsor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _company = "Google";
    _hiredStudents = 0;

}

std::string Sponsor::hire(){
    _hiredStudents++;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;

}

void Sponsor::introduce() {
    std::cout << "Bonjour, I am " << _name << ", a " << _age << " years old " << getGender() << " who represents " << _company << " and hired " << _hiredStudents << " students so far " << std::endl;
}
