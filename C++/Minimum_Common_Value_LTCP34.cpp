#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool does_exist(vector<int>& nums, int target) {
    int size = nums.size();
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right-left)/2;

        if (nums[mid] == target) {
            return true;
        }
        else if (target <= nums[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return false;
}

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int n2 = nums2.size();

    for (int i = 0; i < n2; i++) {
        if (does_exist(nums1, nums2[i])) {
            return nums2[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr1{1,3,5,7,9,11,13};
    vector<int> arr2{0,2,4,6,8,10,13};
    cout << getCommon(arr1, arr2);
}