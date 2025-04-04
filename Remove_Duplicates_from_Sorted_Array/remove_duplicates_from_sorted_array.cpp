#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        int removeDuplicates(vector<int>& nums) {
            cout << "nums address: "<< &nums << endl;
            if (nums.empty()) return 0;
            int uniqueIndex = 1; // Start from the second element
            
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) {
                    nums[uniqueIndex] = nums[i];
                    uniqueIndex++;
                }
            }
            return uniqueIndex;
        }
};

class Solution_Others{
    public:
        int removeDuplicates(vector<int>& nums) {
            int j = 1;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] > nums[i - 1]) {
                    nums[j] = nums[i];
                    j++;
                }
            }
            return j;
        }
    };

int main() {
    Solution solution;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << "Original array address: "<< &nums << endl;
    int newLength = solution.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}