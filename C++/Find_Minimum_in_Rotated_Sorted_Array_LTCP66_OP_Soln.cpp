#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    int ans = INT_MAX;

    while (left <= right) {
        int mid = left + (right - left)/2;
        // search space is already sorted then always nums[low]
        // will be smaller in that search space
        if (nums[left] <= nums[right]) {
            ans = min(ans, nums[left]);
            break;
        }
        if (nums[left] <= nums[mid]) {
            ans = min(ans, nums[left]);
            left = mid + 1;
        }
        else {
            right = mid - 1;
            ans = min(ans, nums[mid]);
        }
    }
    return ans;
}

int main() {
    vector<int> arr{3,4,5,1,2};
    cout << findMin(arr);
}