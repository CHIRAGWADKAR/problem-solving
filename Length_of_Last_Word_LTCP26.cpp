#include<iostream>
#include<string>
#include<string.h>
#include<strings.h>
#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int len = s.length();
    int count = 0;
    for (int i = len-1; i >= 0;) {
        if (s[i] == ' ') {
            i--;
            if (count > 0) {
                return count;
            }
        }
        else if (s[i] != ' ') {
            count++;
            i--;
        }
    }
    return count;
}

int main() {
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s);
    return 0;
}