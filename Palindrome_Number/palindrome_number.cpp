#include <iostream>
#include <string>
#include <cmath> // for floor function
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        bool ans = true;
        for (size_t i = 0; i < floor(str_x.size()/2) ; i++)
        {
            if (str_x[i] == str_x[str_x.size()-i-1])
            {
                ans = ans && true;
            }
            else
            {
                ans = ans && false;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    int x = 121;
    bool result = s.isPalindrome(x);
    if (result) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}