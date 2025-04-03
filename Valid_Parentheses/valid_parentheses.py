
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')':'(', '}':'{', ']':'['}
        
        for char in s:
            if char in mapping.values():
                stack.append(char)
            elif char in mapping.keys():
                if stack == [] or mapping[char] != stack.pop():
                    return False
            else:
                return False
                
        return stack == []


# Test cases
if __name__ == "__main__":
    solution = Solution()
    print(solution.isValid("()"))         # True
    print(solution.isValid("()[]{}"))     # True
    print(solution.isValid("(]"))         # False
    print(solution.isValid("([)]"))       # False
    print(solution.isValid("{[]}"))       # True
    print(solution.isValid("{{{{}}}}"))   # True
