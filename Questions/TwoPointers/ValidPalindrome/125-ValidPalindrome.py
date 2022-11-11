class Solution:
    def isPalindrome1(self, s: str) -> bool:
        alpha = "".join([c.lower() for c in s if c.isalnum()])
        return alpha == alpha[::-1]

    def isPalindrome2(self, s: str) -> bool:
        target = re.sub('[^a-z0-9]', '', s.lower())
        return target == target[::-1]

    def isPalindrome3(self, s : str) -> bool:
        target = s.lower()
        left, right = 0, len(target)-1
        while left < right:
            while left < right and not target[left].isalnum():
                left += 1
            while left < right and not target[right].isalnum():
                right -= 1
            if target[left] != target[right]:
                return False
            left += 1
            right -= 1
        return True