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

bool uniqueOccurrences(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    vector<int> arr2{};
    sort(arr.begin(), arr.end()); // [1,1,1,2,2,3]

    for (int i = 1; i < n; i++) {
         if (arr[i-1] == arr[i]) {
                count++;
            }
            else {
                count++;
                arr2.push_back(count);
                count = 0;
            }
            if (i == n-1) {
                arr2.push_back(++count);
            }
    }
    sort(arr2.begin(), arr2.end());
    print_array(arr2);
    cout << endl;

    for (int j = 1; j < arr2.size(); j++) {
        if (arr2[j] == arr2[j-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr{1,2,2,1,1,3,3};
    cout << uniqueOccurrences(arr);
}