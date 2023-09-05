#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        // if mid points the target
        if (nums[mid] == target) return true;

        // Edge case:
        if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
            left = left + 1;
            right = right - 1;
            continue;
        }

        // if left part is sorted:
        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target <= nums[mid]) {
                // element exists:
                right = mid - 1;
            }
            else {
                // element does not exist:
                left = mid + 1;
            }
        }
        else { // if right part is sorted:
            if (nums[mid] <= target && target <= nums[right]) {
                // element exists:
                left = mid + 1;
            }
            else {
                // element does not exist:
                right = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr{2,5,6,0,0,1,2};
    int t = 0;
    cout << search(arr, t);
}