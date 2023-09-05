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

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int first = -1, last = -1, x = target;
    vector<int> nums2(2);

    for (int i = 0; i < n; i++) {
        if (nums[i] == x) {
            if (first == -1) {
                first = i;
                nums2[0] = first;
            }
            else {
                last = i;
                nums2[1] = last;
            }
        }
        else {
            nums2[0] = -1;
            nums2[1] = -1;
        }
    }
    print_array(nums2);
    return nums2;
}

int main() {
    vector<int> nums{5,7,7,10};
    int target = 8;
    searchRange(nums, target);
}