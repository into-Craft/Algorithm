class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit, minimum = 0, 10**4
        for price in prices:
            if minimum < price:
                profit = max(profit, price-minimum)
            minimum = min(price, minimum)
        return profit