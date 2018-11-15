#include <iostream>
#include <vector>

int main()
{

    std::vector<std::string> types;
    std::vector<std::string> leafColors;
    std::vector<int> ages;
    std::vector<std::string> sexes;

    types.push_back("Tolgy");
    leafColors.push_back("Green");
    ages.push_back(15);
    sexes.push_back("Male");


    types.push_back("Fuz");
    leafColors.push_back("Green");
    ages.push_back(12);
    sexes.push_back("Female");



    for(int i = 0; i < types.size(); ++i){
        std::cout << types[i] << " " << leafColors[i]
                    << " " << ages[i] << " " << sexes[i] << std::endl;
    }

    return 0;
}