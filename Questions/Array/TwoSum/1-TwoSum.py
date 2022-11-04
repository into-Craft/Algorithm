class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictionary = dict()
        for i, num in enumerate(nums):
            diff = target - num
            if diff in dictionary:
                return [dictionary[diff], i]
            dictionary[num] = i
            
        