/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/




#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        
        int j=0;
        /*
         iterates through the vector using a for loop with the variable i. 
         Inside the loop, it checks if the current element at nums[i] is equal to the target value, 
         val. If it is equal, it continues to the next iteration, 
        */
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                
                continue;
            }
            //If nums[i] is not equal to val, it copies the value of nums[i] to nums[j] and increments j. 
            nums[j]=nums[i];
            j++;
        }
        //Finally, the function returns the value of j, which represents the new length of the modified vector
        return j;
    }

int main(){
    vector<int> v;
    int n,target;
    cout<<"enter the no. of elements: ";
    cin>>n;

    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"enter the target: ";
    cin>>target;
     

     n=removeElement(v,target);
      for(int i=0;i<n;i++)
      cout<<v[i]<<" ";

      return 0;
}