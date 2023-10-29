// Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

//PREP
//P: integert array with random numbers
//R: integer array with nums[nums[i]] numbers
//E:
class Solution {
    public int[] buildArray(int[] nums) {
        //Loop inside the array creat new array and set numbers according to
        //nums[nums[i]]
        if(nums.length<2){
            return nums;
        }
        int[] list=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            list[i]=nums[nums[i]];
        }
        return list;
    }
}
//buildArray([1,3,5,2,3,0])O/P:[3,2,0,5,4,1]