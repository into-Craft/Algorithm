class Solution:
    def isPalindrome1(self, s: str) -> bool:
        alpha = "".join([c.lower() for c in s if c.isalnum()])
        return alpha == alpha[::-1]

    def isPalindrome2(self, s: str) -> bool:
        target = re.sub('[^a-z0-9]', '', s.lower())
        return target == target[::-1]