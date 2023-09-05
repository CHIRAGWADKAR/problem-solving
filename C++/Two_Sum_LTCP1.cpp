#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(nums[i]+nums[j] == target) {
                cout << "[" << i << "," << j << "]";
                return {i, j};
            }
        }
    }
    cout << "[]";
    return {};
}

int main() {
    int target=9;
    vector<int> nums{2, 7, 11, 15};
    twoSum(nums, target);
}