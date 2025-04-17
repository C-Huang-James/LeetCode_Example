#include <iostream>
using namespace std;

class Solution {
    public:
    int climbStairs(int n) {
        if (n <= 2) return n; // Base cases: 1 way for 1 step, 2 ways for 2 steps
        int first = 1, second = 2, current;
        for (int i = 3; i <= n; ++i) {
            current = first + second; // Current number of ways is the sum of the previous two
            first = second; // Update first to the previous second
            second = current; // Update second to the current
        }
        return current; // Return the total number of ways to climb n stairs
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n; // Input the number of stairs
    int result = solution.climbStairs(n); // Call the climbStairs function
    cout << "Number of ways to climb " << n << " stairs: " << result << endl; // Output the result
    return 0;
}