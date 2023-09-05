#include<bits/stdc++.h>
#include<vector>
using namespace std;

int specialArray(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] >= n) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums{3,5};
    cout << specialArray(nums);
}