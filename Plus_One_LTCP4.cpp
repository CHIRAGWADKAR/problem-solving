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

vector<int> plus_one(vector<int>& arr) {
    int n = arr.size();

    for(int i=n-1; i>=0; i--) {
        if(arr[i] < 9) {
            arr[i] = arr[i] + 1;
            return arr;
        }
        else {
            arr[i] = 0;
        }
    }
    arr.insert(arr.begin(), 1);
    return arr;
}

int main() {
    vector<int> arr = {9,0,0,9};
    plus_one(arr);
    print_array(arr);
}
