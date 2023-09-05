#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool does_exist(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
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

void print_array(vector<int>& array) {
    int n = array.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i != n-1) {
            cout << ", ";
        }
    }
    cout << "]";
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int s1 = nums1.size(), s2 = nums2.size();
    vector<int> nums3{};

    for (int i = 0; i < s2; i++) {
        if (does_exist(nums1, nums2[i])) {
            if (!(does_exist(nums3, nums2[i]))) {
                nums3.push_back(nums2[i]);
            }
        }
    }
    print_array(nums3);
    return nums3;
}

int main() {
    vector<int> arr1{4,9,5};
    vector<int> arr2{9,4,9,8,4};
    intersection(arr1, arr2);
}