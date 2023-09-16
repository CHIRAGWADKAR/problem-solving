#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums) {
    int n = nums.size();

    for (int i = 1; i < n;) {
        if (i == (n-1)) {
            return true;
        }
        else if (i < n-1) {    
        i += nums[i];
        }
        if (i > n-1) {
            i = i - n;
        }
    }
    return false;
}

int main() {
    vector<int> nums{2,0,1,1,2};
    cout << canJump(nums);
}