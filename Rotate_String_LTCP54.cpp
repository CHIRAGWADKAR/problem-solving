#include<bits/stdc++.h>
using namespace std;

// a = 97, b = 98, c = 99, d = 100, e = 101, f= 102, g = 103, h = 104
// i = 105, j = 106, k = 107, l = 108, m = 109, n = 110, o = 111, p = 112
// q = 113, r = 114, s = 115, t = 116, u = 117, v = 118, w = 119, x = 120, y = 121, z = 122

bool rotateString(string s, string goal) {
    int n1 = s.length(), n2 = goal.length(), count = 0;
    if (n1 != n2) return false;
    if (n1 == 0) return true;

    int shifts[n1+1];
    for (int i = 0; i < n1; i++) {
        shifts[i] = 1;
    }
    int left = -1;
    for (int right = 0; right < n1; ++right) {
        while (left >= 0 && (goal[left] != goal[right])) {
            left -= shifts[left];
        }
        shifts[right+1] = right - left++;
    }
    int match = 0;
    string twice_s = s+s;
    for (auto c : twice_s) {
        while (match >= 0 && goal[match] != c) {
            match -= shifts[match];
        }
        if (++match == n1) return true;
    }
    return false;
}

int main() {
    string s = "gcmbf", goal = "fgcmb";
    cout << rotateString(s, goal);
}