
class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_str = str(x)
        ans = True
        for i in range(len(x_str)//2):
            if x_str[i] == x_str[-i-1]:
                ans = ans and True
            else:
                ans = ans and False

        return ans



# Example usage
if __name__ == "__main__":
    x_int = 121
    solution = Solution()
    result = solution.isPalindrome(x_int)
    print(result)  # Output: [0, 1]