from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        target_dict = {}

        for i, num in enumerate(nums):
            
            if num in target_dict: return [target_dict[num], i]

            target_dict[target-num] = i



# Example usage
if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    solution = Solution()
    result = solution.twoSum(nums, target)
    print(result)  # Output: [0, 1]