#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int left = 0, right = letters.size()-1, mid;

    while (left <= right) {
        mid = left + (right - left)/2;

        if (target >= letters[mid]) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return letters[left % letters.size()];
}

int main() {
    vector<char> letters{'c', 'f', 'j'};
    char t = 'a';
    cout << nextGreatestLetter(letters, t);
}