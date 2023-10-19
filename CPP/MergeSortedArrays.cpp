#include <iostream>
#include <vector>
using namespace std;

void MergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums2[j] > nums1[i]) {
            nums1[k] = nums2[j];
            j--;
        } else {
            nums1[k] = nums1[i];
            i--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    int m, n;
    cin >> m;
    vector<int> nums1(m);

    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cin >> n;
    vector<int> nums2(n);

    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    MergeSortedArray(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    
    return 0;
}
