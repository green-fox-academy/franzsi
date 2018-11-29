#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets);

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune



    for(const auto& planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }

    return 0;
}

std::vector<std::string> putSaturn (const std::vector<std::string>& planets){
    std::vector<std::string> planets2 = planets;

    planets2.insert(planets2.begin()+5, "Saturn");

    return planets2;

}