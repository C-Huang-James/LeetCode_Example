#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m{};
        vector<int> ans{};
        for(int i = 0; i < nums.size(); i++)
        {
            if(m[target - nums[i]])
            {
                ans = {m[target - nums[i]]-1, i};
            }
            m[nums[i]] = i+1;
        }
        return ans;
    }
};

int main(){
    Solution s{};
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    cout << "Values: " << nums[result[0]] << ", " << nums[result[1]] << endl;

    return 0;
}