#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int strStr(string haystack, string needle) {
            int haystackLength = haystack.length();
            int needleLength = needle.length();
            
            for (int i = 0; i <= haystackLength - needleLength; i++) {
                int j;
                for (j = 0; j < needleLength; j++) {
                    if (haystack[i + j] != needle[j]) {
                        break;
                    }
                }
                if (j == needleLength) {
                    return i; // Found the first occurrence
                }
            }
            return -1; // Needle not found in haystack
        }
    };

int main() {
    Solution solution;
    string haystack = "hello", needle = "ll";
    int result = solution.strStr(haystack, needle);
    cout << "The index of the first occurrence of needle in haystack is: " << result << endl;
    
    return 0;
}