from typing import List

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        """
        Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
        """ 
        return haystack.find(needle)
    
# Example usage:
if __name__ == "__main__":
    solution = Solution()
    haystack = "hello"
    needle = "ll"
    result = solution.strStr(haystack, needle)
    print(f"The index of the first occurrence of '{needle}' in '{haystack}' is: {result}")