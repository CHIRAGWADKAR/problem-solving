#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maximumCount(vector<int>& nums) {
    int n = nums.size(), left = 0, right = n, mid, countp = 0, countn = 0;

    if (nums[0] > 0 || nums[n-1] < 0) {
        return n;
    }
    else {
    return (countp, countn);
}

int main() {
    vector<int> arr{-3,-2,-1,0,1,2};
    cout << maximumCount(arr);
}