#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int i = 0, count = 0;
    vector<int> nums2;

    for (i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr{3,2,2,3};
    int v = 3;
    cout << removeElement(arr, v);
}
