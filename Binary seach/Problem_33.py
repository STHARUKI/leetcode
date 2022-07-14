# binary search
# No.33 https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        while left <= right:
            mid = int((left + right) / 2)
            print("%s %s %s" % (left, mid, right))
            if nums[mid] == target:
                return mid
            if nums[mid] < nums[left]:
                if nums[right] >= target and nums[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
            else:
                if nums[left] <= target and nums[mid] > target:
                    right = mid - 1
                else:
                    left = mid + 1
        return -1


