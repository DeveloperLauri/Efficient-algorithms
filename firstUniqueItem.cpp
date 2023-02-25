/*25.2.2023 Lauri Inkilä – this algorithm utilizes self balancing binary tree (red black binary tree)
to find the first unique string in a list. The time complexity is O(log n).*/

#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

string firstUniqueItem(const vector<string>& items)
{

    map<string, int> quantities;
    for (const string& item : items) {
        quantities[item]++;
    }

    for (const string& item : items) {
        if (quantities[item] == 1) {
            return item;
        }
    }
    
    throw logic_error("Waiting to be implemented");
}

int main()
{
    vector<string> items = { "Keyboard", "Computer", "Keyboard", "Berrie", "Bag", "Computer", "Perry", "Berrie", "Talisker" };
    cout << firstUniqueItem(items);
}