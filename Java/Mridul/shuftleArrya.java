// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

//PREP
//P:int array and n afeter which to shuffle
//R:new array formed after shuffling
//E:
class Solution {
    public int[] shuffle(int[] nums, int n) {
        //check to array for n at nums.length/2+1
        //make two arrays with before number and after
        //add one element of both at a time
        int half=nums.length/2;
        int[] shuffled=new int[nums.length];
        for(int i=0;i<half;i++){
            shuffled[i+i]=nums[i];
            shuffled[i+i+1]=nums[half+i];
        }
        return shuffled;
    }
}
//shuffle([2,5,1,3,4,7],3)O/P:[2,3,5,4,1,7]
//shuffle([2,5,1,3,4,4,3,2,1],4)O/P:[2,4,5,3,1,2,3,1,4]