#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
   int n = nums.size();
        int lb = lower_bound(nums.begin(), nums.end(),target) - nums.begin();
        int ub = upper_bound(nums.begin(), nums.end(), target)- nums.begin() - 1;
        if (lb < n && nums[lb] == target) {
            cout << "[" << lb << ", " << ub << "]";
            return {lb, ub};
        }
        cout << "[" << -1 << ", " << -1 << "]";
        return {-1, -1};
}

int main() {
    vector<int> nums{5,7,7,7,7,10};
    int target = 8;
    searchRange(nums, target);
}