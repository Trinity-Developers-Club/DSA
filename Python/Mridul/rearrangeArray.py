# You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
# You should rearrange the elements of nums such that the modified array follows the given conditions:

# 1. Every consecutive pair of integers have opposite signs.
# 2. For all integers with the same sign, the order in which they were present in nums is preserved.
# 3. The rearranged array begins with a positive integer.

# Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        ans=list()
        for i in range(len(nums)):
            ans.append(0)
        pos=0
        neg=1
        for i in range(0,len(nums)):
            if(nums[i]>0):
                ans[pos]=nums[i]
                pos+=2
            else:
                ans[neg]=nums[i]
                neg+=2
        return ans