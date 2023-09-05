#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int mostFrequentEven(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            answer = (nums[i] % 2 == 0 ? nums[i] : nums[i++]);
        }
        answer == nums[i] && nums[i] % 2 == 0 ? count++ : count--;
    }
    if (answer % 2 == 0) return answer;
    else return -1;
}

int main() {
    vector<int> arr{0,1,2,2,4,4,1};
    cout << mostFrequentEven(arr);
    return 0;
}
