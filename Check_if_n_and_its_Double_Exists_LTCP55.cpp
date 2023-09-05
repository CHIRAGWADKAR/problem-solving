#include<bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ( arr[i] == (2 * arr[j]) || arr[j] == (2 * arr[i])) {
                    return true;
                }
            }
        }
        return false;
}

int main() {
    vector<int> arr{-10,12,-20,-8,15};
    cout << checkIfExist(arr);
}