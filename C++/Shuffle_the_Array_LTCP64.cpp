#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int>& nums) {
    int n = nums.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i != (n-1)) {
            cout << ", ";
        }
    }
    cout << "]";
}

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result{};
    for (int i = 0; i < n; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }
    print_array(result);
    return result;
}

int main() {
    vector<int> nums{2,5,1,3,4,7};
    int n = 3;
    shuffle(nums, n);
}