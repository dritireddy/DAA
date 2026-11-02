#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, string> getLCS(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();
    

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1]; 
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
            }
        }
    }
    

    int lcsLength = dp[m][n];
    

    string lcsString = "";
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lcsString.push_back(s1[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--; 
        } else {
            j--;
        }
    }
    

    reverse(lcsString.begin(), lcsString.end());
    
    return {lcsLength, lcsString};
}

int main() {
    string s1 = "abcde";
    string s2 = "ace";
    
    auto result = getLCS(s1, s2);
    
    cout << "Length of LCS: " << result.first << endl;
    cout << "LCS String: " << result.second << endl;
    
    return 0;
}
