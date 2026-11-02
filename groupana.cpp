#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <array>

struct ArrayHash {
    std::size_t operator()(const std::array<int, 26>& arr) const {
        std::size_t hash_code = 0;
        for (int count : arr) {
            hash_code ^= std::hash<int>{}(count) + 0x9e3779b9 + (hash_code << 6) + (hash_code >> 2);
        }
        return hash_code;
    }
};

std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& strs) {
    std::unordered_map<std::array<int, 26>, std::vector<std::string>, ArrayHash> anagram_map;

    for (const std::string& s : strs) {
        std::array<int, 26> frequency = {0};
        for (char c : s) {
            frequency[c - 'a']++;
        }
        anagram_map[frequency].push_back(s);
    }

    std::vector<std::vector<std::string>> result;
    for (auto& pair : anagram_map) {
        result.push_back(std::move(pair.second));
    }
    return result;
}

int main() {
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto grouped = groupAnagrams(strs);

    for (const auto& group : grouped) {
        std::cout << "[ ";
        for (const auto& word : group) std::cout << word << " ";
        std::cout << "]\n";
    }
    return 0;
}
