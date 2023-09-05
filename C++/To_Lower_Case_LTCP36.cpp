#include<bits/stdc++.h>
#include<string>
using namespace std;

string toLowerCase(string s) {
    int s_size = s.length();

    for (int i = 0; i < s_size; i++) {
        /*if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }*/
        (s[i] >= 65 && s[i] <= 90) ? s[i] += 32 : s[i] += 0;
    }
    return s;
}

int main() {
    string s ="LOVELY";
    cout << toLowerCase(s);
}