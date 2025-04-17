class Solution:
    def mySqrt(self, x: int) -> int:
        """Binary Search"""
        if x < 2:
            return x
        left, right = 2, x // 2
        while left <= right:
            mid = left + (right - left) // 2
            square = mid * mid
            if square == x:
                return mid
            elif square < x:
                left = mid + 1
            else:
                right = mid - 1
        return right



# Example usage:
if __name__ == "__main__":
    s = Solution()
    print(s.mySqrt(1073697799))
