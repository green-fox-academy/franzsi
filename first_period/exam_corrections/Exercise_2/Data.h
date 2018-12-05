#ifndef EXERCISE2_DATA_H
#define EXERCISE2_DATA_H

#include <string>

enum class Weather{
    RAINY,
    SUNNY,
    CLOUDY,
    UNKNOWN
};

class Data
{
public:
    Data(const std::string &date, const std::string &city, Weather weather);

    const std::string &getDate() const;
    const std::string &getCity() const;
    Weather getWeather() const;

public:
private:
    std::string _date;
    std::string _city;
    Weather _weather;
};


#endif //EXERCISE2_DATA_H