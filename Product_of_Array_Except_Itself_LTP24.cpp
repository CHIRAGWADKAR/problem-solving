#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& array) {
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

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> nums2{};
    int prefix = 1;

    for (int i = 0; i < n; i++) {
        nums2.push_back(prefix);
        prefix *= nums[i];
    }
    int postfix = 1;
    for (int j = n-1; j >= 0; j--) {
        nums2[j] *= postfix;
        postfix *= nums[j];
    }
    print(nums2);

    return nums2;
}

int main() {
    vector<int> arr{1,2,3,4};
    productExceptSelf(arr);
    return 0;
}