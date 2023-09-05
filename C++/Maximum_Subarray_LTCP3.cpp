#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int maxSubArray(int nums[], int n) {
    int current_sum = 0, best_sum = INT_MIN, x;

    for(x=0; x<n; x++)
        {
            current_sum = max(nums[x], current_sum+nums[x]);
            best_sum = max(best_sum, current_sum);
        }
    return best_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << maxSubArray(arr, size);
}
