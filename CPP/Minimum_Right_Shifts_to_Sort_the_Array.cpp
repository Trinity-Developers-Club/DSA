/*
You are given a 0-indexed array nums of length n containing distinct positive integers. 
Return the minimum number of right shifts required to sort nums and -1 if this is not possible.

A right shift is defined as shifting the element at index i to index (i + 1) % n, for all indices.

Example 1:

Input: nums = [3,4,5,1,2]
Output: 2
Explanation: 
After the first right shift, nums = [2,3,4,5,1].
After the second right shift, nums = [1,2,3,4,5].
Now nums is sorted; therefore the answer is 2.

*/
#include<iostream>
#include<vector>
using namespace std;


int minimumRightShifts(vector<int>& nums) {

        int n = nums.size(); 
        int index = 0; 

        // Step 1: Find the point where the elements are in ascending order.
        while (index + 1 < n && nums[index] < nums[index + 1])
            index++;

        // Step 2: If the entire array is already sorted, return 0.
        if (index == n - 1)
            return 0;

        index++; // Move to the next index.
        int curr_ind = index; // Store the index where ascending order breaks.

        // Step 3: Check if the rest of the elements are also in ascending order.
        while (index + 1 < n && nums[index] < nums[index + 1])
            index++;

        
        if (index != n - 1) // If not all elements are in ascending order, return -1.
            return -1;

        if (nums[curr_ind] < nums[0] && nums[n - 1] < nums[0]) {
            // If the element at curr_ind is less than the first element,
            // and the last element is also less than the first element,
            // it's possible to sort with right shifts.
            // Calculate the number of right shifts needed.
            return n - curr_ind;
        }

        // Step 5: If none of the conditions are met, return -1.
        return -1;
        
    }


int main(){
   vector<int>nums;
   int n,val;
   cout<<"enter the no. of elements:";
   cin>>n;
   cout<<"enter the elements:";
   
   for(int i=0;i<n;i++){
    
    cin>>val;
    nums.push_back(val);
    
   }
   
   cout<<minimumRightShifts(nums);

    return 0;
}