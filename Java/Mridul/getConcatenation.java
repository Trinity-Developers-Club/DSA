// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.
// Return the array ans.

//PREP
//P: nums integer array
//R: ans integer value of 2d duplicate of nums
//E:
class Solution {
    public int[] getConcatenation(int[] nums) {
        //length of ans
        //ans i and ans[i+len]=numsi
        //return ans
        int[] ans=new int[2*(nums.length)];
        for(int i=0;i<nums.length;i++){
            ans[i]=nums[i];
            ans[i+nums.length]=nums[i];
        }
        return ans;
    }
}
//getConcatenation([1,2,3,7,1])O/P: [1,2,3,7,1,1,2,3,7,1]
//getConcatenation([1,2,3,7])O/P: [1,2,3,7,1,2,3,7]