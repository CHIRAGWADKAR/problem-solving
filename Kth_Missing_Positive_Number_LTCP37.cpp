#include<bits/stdc++.h>
#include<vector>
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

int findKthPositive(vector<int>& arr, int k) {
    int s = arr.size();
    int count = 1;
    vector<int> arr2{};

}

int main() {
    vector<int> arr{2,3,4,7,11};
    int k = 5;

    cout << findKthPositive(arr, k);
}