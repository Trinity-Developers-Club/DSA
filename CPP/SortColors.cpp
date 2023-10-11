#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

void combinationalSum(vector<int>& nums){
    int low=0;
    int high=nums.size()-1;
    int current =0; // for traversing

    while(current<=high){
        if(nums[current]==0){
            swap(nums[current],nums[low]);
            low++;
            current++;
        }
        else if(nums[current]==2){
            swap(nums[current],nums[high]);
            high--;
        }
        else{
            current++;
        }
    }
}

int main()
{
    int n,a;
    cin>>n;

    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    combinationalSum(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}