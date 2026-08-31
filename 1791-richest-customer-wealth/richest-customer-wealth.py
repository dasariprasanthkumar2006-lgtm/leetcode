class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        r=0
        for i in range(len(accounts)):
            r=max(r,(sum(accounts[i])))
        return r