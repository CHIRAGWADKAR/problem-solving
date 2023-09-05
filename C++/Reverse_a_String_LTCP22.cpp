#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size();
    int l = 0, r = n-1;

    for (l, r; l < r; l++, r--) {
        swap(s[l], s[r]);
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
}
