from math import factorial

class Solution:
    def climbStairs(self, n: int) -> int:
        ways = 0
        for i in range(n // 2 + 1):  # i is the number of two-steps
            one_steps = n - 2 * i  # remaining one-steps
            # Calculate combinations (one_steps + i) choose i
            ways += factorial(one_steps + i) // (factorial(i) * factorial(one_steps))
        return ways

# Example usage:
if __name__ == "__main__":
    s = Solution()
    print(s.climbStairs(5))
