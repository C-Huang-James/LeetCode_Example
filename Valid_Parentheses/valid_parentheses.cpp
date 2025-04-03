#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            map<char, char> parentheses = {{')', '('}, {']', '['}, {'}', '{'}};
            string stack;
            for (char c : s) {
                if (parentheses.count(c)) { // The expression parentheses.count(c) checks if the character c 
                                            // exists as a key in the map parentheses.
                    if (stack.empty() || stack.back() != parentheses[c]) {
                        return false;
                    }
                    stack.pop_back();
                } else {
                    stack.push_back(c);
                }
            }
            return stack.empty();     
        }
    };

int main(){
    Solution s{};
    string input = "([{}])";
    bool result = s.isValid(input);
    cout << (result ? "Valid" : "Invalid") << endl;
    // Output: Valid
    input = "([{}])}";
    result = s.isValid(input);
    cout << (result ? "Valid" : "Invalid") << endl;
    // Output: Invalid
    input = "([{}]){";
    result = s.isValid(input);
    cout << (result ? "Valid" : "Invalid") << endl;
    // Output: Invalid
    input = "([{}]){[()]()}";
    result = s.isValid(input);
    cout << (result ? "Valid" : "Invalid") << endl;
    // Output: Valid

    return 0;
}