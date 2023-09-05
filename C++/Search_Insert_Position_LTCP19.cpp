#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0, right = n-1;
    int ans = n;
    
    while (left <= right) {
        int mid = left + (right-left)/2;
        // mid maybe an answer
        if (nums[mid] >= target) {
            ans = mid;
            // look for smaller index on the left
            right = mid - 1;
        }
        else {
            left = mid + 1; // look for number in the right
        }
    }
    return ans;
}

int main() {
    vector<int> arr{1,5,6};
    int t = 2;
    cout << searchInsert(arr, t);
    return 0;
}
