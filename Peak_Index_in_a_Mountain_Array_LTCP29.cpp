#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n-1;

    while (left <= right) {
        int mid = left + (right - left)/2;

        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    vector<int> nums{0,10,5,2};
    cout << peakIndexInMountainArray(nums);
}