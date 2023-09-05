#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string truncateSentence(string s, int k) {
    string s2 = "";
    int count = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i]==' ') {
            count++;
        }
        if (count == k) {
            return s2;
        }
        s2 += s[i];

    }
    return s2;
}

int main() {
    string s = "What is the solution to this problem";
    int k = 4;
    cout << truncateSentence(s, k);
}