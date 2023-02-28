/*25.2.2023 Lauri Inkilä – this algorithm utilizes self balancing binary tree (red black binary tree)
to find the first unique string in a list. The time complexity is O(log n).*/

#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>

std::string firstUniqueItem(const std::vector<std::string>& items)
{

    std::map<std::string, int> quantities;
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