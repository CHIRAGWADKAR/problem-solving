#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int binary_Search(vector<int>& nums, int target,int left,int right){
    int mid= left +(right-left)/2;

    if(left > right) {
        return -1;
    }

    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid] >= nums[left]){
        if(target < nums[mid]&& target>=nums[left]){
            return binary_Search( nums, target, left ,mid-1);
        }
        else{
            return binary_Search( nums, target, mid+1, right);
        }
    }
    if(nums[right] >= target && nums[mid] <= target){
        return binary_Search( nums, target, mid+1, right);
    }
    else {
        return binary_Search( nums, target, left, mid-1);
    }
}

int search(vector<int>& nums, int target) {
    int n= nums.size()-1;
    return binary_Search(nums, target, 0, n);
}

int main() {
    vector<int> arr{4,5,6,7,0,1,2};
    int t = 0;
    cout << search(arr, t);
    return 0;
}
