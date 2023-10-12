#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    int n,a;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    containsDuplicate(nums);
    return 0;
}
