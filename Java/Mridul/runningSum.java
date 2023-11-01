// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

class Solution {
    public int[] runningSum(int[] nums) {
        int num=0;
        int N=nums.length;
        int[] runsum=new int[N];
        for(int i=0;i<N;i++){
            num+=nums[i];
            runsum[i]=num;
        }
        return runsum;
    }
}