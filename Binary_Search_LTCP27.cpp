#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()-1;

    while (left <= right) {
        int mid = left + (right-left)/2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (target <= nums[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr{1,2,3,4,5};
    int t = 2;
    cout << search(arr, t);
    return 0;
}