class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        dp = [float("inf")] * (amount + 1)
        dp[0] = 0

        for p in range(1, amount + 1):
            for coin in coins:
                if p >= coin:
                    dp[p] = min(dp[p], 1 + dp[p - coin])

        if dp[amount] == float("inf"):
            return -1

        return dp[amount]
        