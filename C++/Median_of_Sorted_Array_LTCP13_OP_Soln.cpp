#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0, j=0, k=0;
    int m = nums1.size(), n = nums2.size();
    int s = m+n;
    vector<double> nums3(s);

    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            k++;
            i++;
        }else {
            nums3[k]=nums2[j];
            k++;
            j++;
        }
    }

    while (i<m){
        nums3[k]=nums1[i];
        k++;
        i++;
    }

    while (j<n){
        nums3[k]=nums2[j];
        k++;
        j++;
    }

    int n3 = nums3.size();
    int start = 0;
    int end = n3;
    int mid = start+(end-start)/2;

    if (n3 % 2 == 0){
        return (nums3[mid] + nums3[mid-1])/2;
    }
    else {
        return nums3[mid];
    }
}

int main() {
    vector<int> arr1{1,3,4};
    vector<int> arr2{3,4,5};
    // [1,3,3,4,4,5]
    cout << findMedianSortedArrays(arr1, arr2);
    return 0;
}
