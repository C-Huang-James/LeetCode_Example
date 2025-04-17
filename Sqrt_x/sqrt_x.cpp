#include <iostream>
using namespace std;

class Solution {
    public:
    int mySqrt(int x) {
        int count = 0;
        int i = 1;
        while (x > 0) {
            x = x - i;
            i += 2;
            count++;
        }
        return x < 0 ? count-1 : count; // Return count-1 if x is negative, else return count 
    }
};

class Solution_Other{
    public:
    int mySqrt(int x){
        while (x >= 0) {
            int left = 0, right = x;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if ((long long)mid * mid == x) {
                    return mid; // Found exact square root
                } else if ((long long)mid * mid < x) {
                    left = mid + 1; // Move to the right half
                } else {
                    right = mid - 1; // Move to the left half
                }
            }
        return right; // The largest integer whose square is less than or equal to x
        }
        return 0;
    }
};

int main() {
    Solution_Other solution;
    int x = 2147395599; // Example input
    int result = solution.mySqrt(x);
    cout << "The rounded integer square root of " << x << " is: " << result << endl; // Output: 2
    
    return 0;
}