#include<bits/stdc++.h>
using namespace std;
# define bad 4

bool isBadVersion(int version) {
    return version == bad ? true : false;
}

int firstBadVersion(int n) {
    int left = 1, right = n, mid;

    while (left <= right) {
        mid = left + (right - left)/2;
        if (isBadVersion(mid)) {
            right = mid - 1;
        }
        else if (!isBadVersion(mid)) {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n = 5;
    cout << firstBadVersion(n);
}