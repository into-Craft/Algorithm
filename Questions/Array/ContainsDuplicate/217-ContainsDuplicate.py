class Solution:
    def containsDuplicate1(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)

    def containsDuplicate2(nums: List[int]) -> bool:
        n = len(nums)
        if n > 1:
            nums.sort()
            for i in range(1, n):
                if nums[i-1] == nums[i]:
                    return True
        return False

    def containsDuplicate3(self, nums: List[int]) -> bool:
        hashset = set()
        for num in nums:
            if num in hashset:
                return True
            else:
                hashset.add(num)
        return False