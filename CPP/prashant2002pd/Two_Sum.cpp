/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/


#include<iostream>
#include<vector>

using namespace std;


 vector<int> twoSum(vector<int>& nums, int target) {
        // Iterate through the input vector
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the sum of elements at indices i and j equals the target
                if (nums[i] + nums[j] == target) {
                    // Return a vector containing the indices i and j
                    return {i, j};
                }
            }
        }

        // If no pair is found, return an empty vector
        return {};
    }

int main(){

  vector<int>nums;
  int n,a,target;
  cout<<"enter the no. elements:";
  cin>>n;
  cout<<"enter the target sum: ";
  cin>>target;

  cout<<"enter the elements:";
  for(int i=0;i<n;i++){
    cin>>a;
    nums.push_back(a);
  }

 nums=twoSum(nums,target);
 for(int i=0;i<nums.size();i++)
 cout<<nums[i]<<" ";
 
  return 0;
  
}