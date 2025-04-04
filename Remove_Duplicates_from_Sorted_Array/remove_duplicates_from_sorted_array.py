from typing import Optional, List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        """
        Do not return anything, modify nums in-place instead.
        """
        write_index = 1  # Index to write the next unique element

        for read_index in range(1, len(nums)):
            if nums[read_index] != nums[write_index - 1]:
                nums[write_index] = nums[read_index]
                write_index += 1
        
        return write_index
    
class Solution_Others:
    def removeDuplicates(self, nums: List[int]) -> int:
        """
        Do not return anything, modify nums in-place instead.
        """
        write_index = 1  # Index to write the next unique element

        for read_index in range(1, len(nums)):
            if nums[read_index-1] < nums[read_index]:
                nums[write_index] = nums[read_index]
                write_index += 1
        
        return write_index

# Example usage:
if __name__ == "__main__":
    solution = Solution_Others()
    nums = [0,0,1,1,1,2,2,3,3,4]
    length = solution.removeDuplicates(nums)
    print("Length of array after removing duplicates:", length)
    print("Modified array:", nums[:length])  # Output: [1, 2]