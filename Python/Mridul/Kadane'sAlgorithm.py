# Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum=0
        maxi=0
        if(len(nums)==1):
            return nums[0]
        for i in range(0,len(nums)):
            sum+=nums[i]
            maxi=max(maxi,sum)
            if(sum<0):
                sum=0
        return maxi