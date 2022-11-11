class Solution:
    def longestConsecutive1(self, nums: List[int]) -> int:
        numset = set(nums)
        longest = 0
        for num in nums:
            if (num-1) not in numset:
                length = 1
                while (num + length) in numset:
                    length += 1
                longest = max(length, longest)
        return longest

    def longestConsecutive2(self, nums: List[int]) -> int:
        length = len(nums)
        if length < 2:
            return length
        nums.sort()
        longest, current = 1, 1
        for i in range(1, length):
            if nums[i] != nums[i-1]: # not same
                if nums[i] == nums[i-1] + 1: # consicutive
                    current += 1
                else: # not consicutive
                    longest = max(current, longest)
                    current = 1
        longest = max(current, longest)
        return longest

