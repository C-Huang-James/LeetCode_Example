#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution{
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) {
            return "";
        }
        std::string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
};

class Solution_Others {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n = strs.size();
            string res = strs[0];
    
            for (int i = 1; i < n; i++) {
                string str = "";
                for (int j = 0; j < min(res.length(), strs[i].length()); j++) {
                    if (strs[i][j] == res[j])
                        str += res[j];
                    else
                        break;
                }
    
                res = str;
            }
    
            return res;
        }
    };

// Example usage
int main() {
    Solution_Others solution;
    std::vector<std::string> strs = {"ab", "a"};
    std::cout << solution.longestCommonPrefix(strs) << std::endl;
    return 0;
}