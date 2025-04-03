class Solution:
    def romanToInt(self, s: str) -> int:
        m = {'M':1000, 'D':500, 'C':100, 'L':50, 'X': 10,'V':5,'I':1}
        count = 0
        prev = 0
        for c in s:
            count += m[c]
            if prev < m[c]:            
                count = count - 2*prev
            prev = m[c]
        return count; 


# Example usage:
if __name__ == "__main__":
    s = Solution()
    print(s.romanToInt("III"))  # Output: 3
    print(s.romanToInt("IV"))   # Output: 4
    print(s.romanToInt("IX"))   # Output: 9
    print(s.romanToInt("LVIII")) # Output: 58
    print(s.romanToInt("MCMXCIV")) # Output: 1994
    print(s.romanToInt("MMXXIII")) # Output: 2023