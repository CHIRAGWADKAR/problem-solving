#include<iostream>
#include<vector>
#include<ostream>
#include<bits/stdc++.h>
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

vector<int> displayArray(vector<int>& arr, int s) {
    vector<int> ans(s);

    for (int i = 0; i < s; i++) {
        ans[i] = arr[arr[i]];
    }
    print_array(ans);
    return ans;
}

vector<int> buildArray(vector<int>& nums) {
    int n = nums.size();
    return displayArray(nums, n);
}

int main() {
    vector<int> a{0,1,2,5,3,4};
    buildArray(a);
    return 0;
}
