#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print_array(vector<int>& array) {
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

int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    vector<int> nums2(101);
    
    for (int i = 0; i < n; i++) {
        nums2[nums[i]]++;
    }

    for (int j = 0; j < nums2.size(); j++) {
        ans += (nums2[j]*(nums2[j]-1))/2;
    }
    return ans;
}

int main () {
    vector<int> nums{1,2,3,1,1,3,3};
    cout << numIdenticalPairs(nums);
}