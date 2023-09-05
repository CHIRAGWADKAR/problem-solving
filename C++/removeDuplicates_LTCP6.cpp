#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int size) {
    int count = 0;

    for(int i=1; i<size; i++) {
        if(arr[i] != arr[i-1]) {
            count++;
            arr[count] = arr[i];
        }
    }
    return count+1;
}

int main() {
    int arr[] = {0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << removeDuplicates(arr, n);
    return 0;
}
