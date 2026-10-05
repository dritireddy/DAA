#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;

    for (const string& s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto& entry : groups) {
        result.push_back(entry.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for (const auto& group : result) {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << group[i];
            if (i + 1 < group.size()) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
