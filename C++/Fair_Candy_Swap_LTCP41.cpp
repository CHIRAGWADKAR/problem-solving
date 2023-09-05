#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int size1 = aliceSizes.size(), size2 = bobSizes.size();
    int sum1 = 0, sum2 = 0;
    sort(aliceSizes.begin(), aliceSizes.end());
    sort(bobSizes.begin(), bobSizes.end());
    for (int i = 0; i < size1; i++) {
        sum1 += aliceSizes[i];
    }
    for (int j = 0; j < size2; j++) {
        sum2 += bobSizes[j];
    }
    int ex_A, ex_B;
    for (int i = 0; i < size1; i++) {
        ex_A = aliceSizes[i];
        ex_B = ex_A + (sum2-sum1)/2;
        int l = 0, r = size2 - 1;
        while (l <= r) {
            int mid = l + (r-l)/2;
            if (bobSizes[mid] == ex_B) {
                cout << "{" << ex_A << ", " << ex_B << "}";
                return {ex_A, ex_B};
            }
            else if (bobSizes[mid] < ex_B) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
    cout << "{" << ex_A << ", " << ex_B << "}";
    return {ex_A, ex_B};
}

int main() {
    vector<int> aliceSizes{2}, bobSizes{1,3};
    fairCandySwap(aliceSizes, bobSizes);
}