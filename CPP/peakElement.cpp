#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return 0;
        if(arr[0] > arr[1]) return 0;
        if(arr[n-1] > arr[n-2]) return n-1;

        int low = 1, high = n-2;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] > arr[mid-1]) 
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int peak = solution.findPeakElement(nums);
    cout << "Peak element index: " << peak << endl;
}
