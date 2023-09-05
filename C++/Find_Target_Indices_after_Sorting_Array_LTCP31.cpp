#include<bits/stdc++.h>
#include<vector>
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

vector<int> targetIndices(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> nums2{};

    for (int k = 0; k < n; k++) {
        if (nums[k] == target) {
            nums2.push_back(k);
        }
    }
    print(nums2);
    return nums2;
}

int main() {
    vector<int> arr{1,2,5,2,3};
    int t = 2;
    targetIndices(arr, t);
}