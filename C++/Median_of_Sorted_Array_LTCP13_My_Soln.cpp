#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i, j;
    int m = nums1.size(), n = nums2.size();
    int s = m+n;
    double a, b;
    vector<double> nums3(s);

    for(i = 0; i < m; i++) {
        nums3[i] = nums1[i];
    }

    for(j = m; j < s; j++) {
        nums3[j] = nums2[j - m];
    }

    if(m==0 && n==0) {
        return -1;
    }

    sort(nums3.begin(), nums3.end());

    a = nums3[s/2];
    b = (nums3[(s/2) - 1] + nums3[s/2])/2;

    return (s % 2) == 0 ? b : a;
}

int main() {
    vector<int> arr1{1,3,4};
    vector<int> arr2{3,4,5};
    cout << findMedianSortedArrays(arr1, arr2);
}
