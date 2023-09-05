#include<bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    int s1 = allowed.length(), s2 = words.size();
    int count = 0, consistent = 0;
    
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            for (int k = 0; k < words[j].length(); k++) {
                if (allowed[i] == words[j][k]) {
                    count++;
                }
            }
            if (count == words[j].length()) {
                consistent += 1;
            }
        }
    }
    return consistent;
}

int main() {
    string allowed = "abc";
    vector<string> words{"a","b","c","ab","ac","bc","abc"};
    cout << countConsistentStrings(allowed, words);
}