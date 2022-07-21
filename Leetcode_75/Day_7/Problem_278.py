# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left = 1
        right = n
        if n == 1:
            return n
        while left <= right:
            mid = int((left + right) / 2)
            if isBadVersion(mid) == True:
                if mid == 1:
                    return 1
                elif mid == n:
                    return n
                elif isBadVersion(mid-1) == False:
                    return mid
                else:
                    right = mid - 1
            else:
                left = mid + 1
        
        return -1
        