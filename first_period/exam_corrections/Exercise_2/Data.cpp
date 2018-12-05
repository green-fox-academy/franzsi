//
// Created by roland on 2018. 11. 30..
//

#include "Data.h"

Data::Data(const std::string &date, const std::string &city, Weather weather) : _date(date), _city(city),
                                                                                _weather(weather)
{}

const std::string &Data::getDate() const
{
    return _date;
}

const std::string &Data::getCity() const
{
    return _city;
}

Weather Data::getWeather() const
{
    return _weather;
}