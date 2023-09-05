#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int left=0, right=nums.size()-1;

    while(left<right)
    {
        if (nums[right] > nums[left]) {return nums[left];}
        int mid = left+(right-left)/2;
        if(nums[mid]<nums[left])
        {
            right = mid;
        }
        else if(nums[mid] > nums[right])
        {
            left = mid+1;
        }
    }
    return nums[left];
}

int main() {
    vector<int> arr{3,4,5,1,2};
    cout << findMin(arr);
}