#include<bits/stdc++.h>
using namespace std;
# define pick 1

int guess(int num) {
    return num > pick ? -1 : num < pick ? 1 : 0;
}

int guessNumber(int n) {
    int left = 0, right = n, mid;
    
    while (left <= right) {
        mid = left + (right - left)/2;
        if (guess(mid) == 0) {
            return mid;
        }
        else if (guess(mid) == -1) {
            right = mid - 1;
        }
        else if (guess(mid) == 1) {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n = 2;
    cout << guessNumber(n);
}