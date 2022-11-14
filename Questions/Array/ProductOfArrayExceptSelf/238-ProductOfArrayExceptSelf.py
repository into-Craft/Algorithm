class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        temp = 1
        answer = []
        for num in nums:
            answer.append(temp)
            temp *= num
        temp, i = 1, len(nums)-1
        nums.reverse()
        for num in nums:
            answer[i] *= temp
            temp *= num
            i -= 1
        return answer 