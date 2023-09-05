#include<iostream>
#include<vector>
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

void swapnums(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = 0;

    for (int i = 0; i < n; i++) {
        nums[i] != 0 ? (swapnums(nums[i], nums[j]), j++) : j += 0;
        /*if (nums[i] != 0) {
            swapnums(nums[i], nums[j]);
            j++;
        }*/
    }
}

int main() {
    vector<int> arr{0,2,0,5,0,1}; // [2,5,1,0,0,0]
    int n = arr.size();
    moveZeroes(arr);
    print_array(arr);
    return 0;
}
