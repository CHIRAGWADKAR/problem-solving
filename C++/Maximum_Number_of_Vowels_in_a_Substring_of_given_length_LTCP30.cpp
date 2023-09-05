#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int maxi(int a, int b) {
    return a > b ? a : b;
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxVowels(string s, int k) {
    int n = s.length(); // n=9
    
    if (n < k) return 0;

    int count = 0, max = 0, i = 0, start = 0, end = k-1; // count=0, max=0, i=0, start=0, end=2

    while (start <= end && i <= n-k) {
        if (isVowel(s[start])) {
            count++;
            start++;
        }
        else {
            start++;
        }
        if (start > end) {
            max = maxi(max, count);
            count = 0;
            i++;
            start = i;
            end += 1;
        }
    }
    return max;
}

int main() {
    string s = "abciiidef";
    int k = 3;
    cout << maxVowels(s, k);
}