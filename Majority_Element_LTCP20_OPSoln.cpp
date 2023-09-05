#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums) {
    int n = nums.size();
    int count = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            answer = nums[i];
        }
        answer == nums[i] ? count++ : count--;
    }
    return answer;
}

int main() {
    vector<int> arr{2,2,1,1,1,2,2};
    cout << majorityElement(arr);
    return 0;
}
