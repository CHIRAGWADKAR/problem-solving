#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    float m = 0;
    vector<int> nums2(n);

    for (int i = 0; i < n; i++) {
        nums2[i] = m;
        m += nums[i];
    }
     m = 0;

     for (int i = n-1; i >= 0; i--) {
        nums2[i] = abs(nums2[i] - m);
        m += nums[i];
     }

     for (int i = 0; i < n; i++) {
        cout << nums2[i] << " ";
     }
     return nums2;
}

int main() {
    vector<int> arr{10,4,8,3};
    leftRightDifference(arr);
    return 0;
}
