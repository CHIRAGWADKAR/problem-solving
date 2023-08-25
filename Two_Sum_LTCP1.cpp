#include<bits/stdc++.h>
using namespace std;

int main() {
    int target=9;
    int arr[] = {2, 7, 11, 15};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<len;i++) {
        for(int j=i+1;j<len;j++) {
            if(arr[i]+arr[j] == target) {
                cout << "[" << i << "," << j << "]";
            }
        }
    }
    return -1;
}