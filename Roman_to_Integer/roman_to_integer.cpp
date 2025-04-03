#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m{{'M',1000}, {'D',500}, {'C',100}, {'L',50}, {'X', 10},{'V',5},{'I',1}};
        int count = 0;
        int prev = 1e4;
        for(char i:s)
        {
            count += m[i];
            if(prev < m[i])
            {
                count -= 2*prev;
            }
            prev = m[i];
        }
        return count;     
    }
};

int main() {
    Solution solution;
    string roman = "MCMXCIV"; // Example Roman numeral
    int integer = solution.romanToInt(roman);
    cout << "The integer value of " << roman << " is: " << integer << endl;
    return 0;
}