#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    int n = s.length();
    vector<char> arr(n);
    string s2;
    
    for (int i = 0; i < n; i++) {
        arr[indices[i]] = s[i];
    }

    for (int i = 0; i < n; i++) {
        s2.push_back(arr[i]);
    }
    
    return s2;
}

int main() {
    string s = "codeleet";
    vector<int> indices{4,5,6,7,0,2,1,3};
    cout << restoreString(s, indices);
}