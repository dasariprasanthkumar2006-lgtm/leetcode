class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        def check(i,j):
            return nums[i]+nums[j] == target 
        
        n=len(nums)
        for i in range (n):
            for j in range(i+1,n):
                if check(i,j):
                    return [i,j]