#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>

#include "Data.h"

std::vector<Data> readFromFile(std::string fileName);
std::map<std::string, int> getRainyDaysByCity(std::vector<Data> data);
std::string findCityWithMostRainyDays(std::map<std::string, int> rainyDaysByCity);

int main()
{
    try{
        std::vector<Data> data = readFromFile("../cities.csv");
        std::map<std::string, int> rainyDaysByCity = getRainyDaysByCity(data);

        std::cout << "City with the most rainy days: " << findCityWithMostRainyDays(rainyDaysByCity) << std::endl;
    }catch(int e){
        std::cout << "cities.csv could not be opened" << std::endl;
        return e;
    }

    return 0;
}

std::vector<Data> readFromFile(std::string fileName)
{
    std::vector<Data> data;

    std::ifstream file(fileName);
    if(!file.is_open()){
        throw 2;
    }

    std::string line;
    while(std::getline(file, line)){
        std::istringstream stream(line);
        std::string word;

        std::string date;
        std::string city;
        Weather weather;

        std::getline(stream, word, ',');
        date = word;
        std::getline(stream, word, ',');
        city = word;
        std::getline(stream, word, ',');

        if(word == "RAINY"){
            weather = Weather::RAINY;
        }else if(word == "SUNNY"){
            weather = Weather::SUNNY;
        }else if(word == "CLOUDY"){
            weather = Weather::CLOUDY;
        }else{
            weather = Weather::UNKNOWN;
        }

        data.push_back(Data(date, city, weather));
    }

    return data;
}

std::map<std::string, int> getRainyDaysByCity(std::vector<Data> data)
{
    std::map<std::string, int> rainyDaysByCity;

    for (int i = 0; i < data.size(); ++i) {
        if(data[i].getWeather() == Weather::RAINY) {
            if (rainyDaysByCity.find(data[i].getCity()) != rainyDaysByCity.end()) {
                rainyDaysByCity[data[i].getCity()]++;
            } else {
                rainyDaysByCity.insert(std::make_pair(data[i].getCity(), 1));
            }
        }
    }

    return rainyDaysByCity;
}

std::string findCityWithMostRainyDays(std::map<std::string, int> rainyDaysByCity)
{
    int max = 0;
    std::string city = "";
    for(auto pair : rainyDaysByCity){
        if(pair.second >= max){
            max = pair.second;
            city = pair.first;
        }
    }

    return city;
}