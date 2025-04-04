from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        for j in range(len(nums)):
            if nums[j] != val:
                nums[i] = nums[j]
                i += 1
        return i
    
# Example usage:
if __name__ == "__main__":
    solution = Solution()
    nums = [3, 2, 2, 3]
    val = 3
    new_length = solution.removeElement(nums, val)
    print(f"New length: {new_length}, Modified array: {nums}")