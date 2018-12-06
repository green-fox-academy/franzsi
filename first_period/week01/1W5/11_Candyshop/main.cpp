#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main(int argc, char* args[])
{
    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    std::vector<std::string> numbers = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i < numbers.size(); ++i)
    {
        if(numbers[i] % 3 == 0)
        {
            numbers.erase(numbers.begin() + i);
            // !!! We need to decrement the loop variable, otherwise
            // it points to the next element after the deletion !!!
            --i;
        }
    }


    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the list as a parameter.

    // Expected output: Cupcake Brownie
    for(const auto& sweet : filter(list, sweets))
    {
        std::cout << sweet << " ";
    }

    return 0;
}