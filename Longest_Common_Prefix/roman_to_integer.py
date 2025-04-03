from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        prefix = str("")
        prev = str("")
        if len(strs)==1:
            return prefix 
        for s in strs[0]:
            prefix = prefix + s
            for i in range(1,len(strs)):
                for ind, c in enumerate(prefix):
                    if strs[i][ind]!=c:
                        return prev
            prev = prefix
        return prefix
    
class Solution_Others:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        prefix = strs[0]
        for string in strs[1:]:
            while string.find(prefix) != 0:
                prefix = prefix[:-1]
                if not prefix:
                    return ""
        return prefix

# Example usage:
if __name__ == "__main__":
    s = Solution_Others()
    strs=["ab","a"]
    print(s.longestCommonPrefix(strs))