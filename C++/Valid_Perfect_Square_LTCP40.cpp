#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int l = 1, r = num;
    long long mid;

    while (l <= r) {
        mid = l + (r-l)/2;
        if (num == mid*mid) {
            return true;
        }
        else if (num > mid*mid) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return false;
}

int main() {
    int num = 14;
    cout << isPerfectSquare(num);
}