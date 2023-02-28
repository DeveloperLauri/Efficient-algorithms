/*28.2.2023 This function looks for the first unique string in the input vector using a std::unordered_map to count the duplicates of each string. 
The time complexity of this algorithm is O(1) due to the use of std::unordered_map.*/

#include <stdexcept>
#include <iostream>
#include <vector>
#include <unordered_map>

std::string firstUniqueItem(const std::vector<std::string>& items)
{

    std::unordered_map<std::string, int> quantities;
    for (const std::string& item : items) {
        quantities[item]++;
    }

    for (const std::string& item : items) {
        if (quantities[item] == 1) {
            return item;
        }
    }
    
    throw std::logic_error("Waiting to be implemented");
}

int main()
{
    std::vector<std::string> items = { "Keyboard", "Computer", "Keyboard", "Berrie", "Bag", "Computer", "Perry", "Berrie", "Talisker" };
    std::cout << firstUniqueItem(items);
}