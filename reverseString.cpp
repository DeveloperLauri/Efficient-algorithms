#include <vector>
#include <iostream>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end){
            std::swap(s[start], s[end]);
            start++;
            end--;
        }
        for (const auto& ch : s){
            std::cout << ch;
        }
    }
        
};

int main() {
    Solution solution;
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};

    solution.reverseString(s);
}

