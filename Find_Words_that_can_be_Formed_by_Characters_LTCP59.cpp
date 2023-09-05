#include<bits/stdc++.h>
using namespace std;

int countCharacters(vector<string>& words, string chars) {
    int s1 = chars.length(), s2 = words.size();
    vector<int> chars2(s1);

    for (int i = 0; i < s1; i++){
        chars2[i] = 0;
    }

    for (int i = 0; i < s2; i++) {
        for (int j = 0; j < words[i].length(); j++) {
            
        }
    }
}

int main() {
    vector<string> words{"cat","bt","hat","tree"};
    string chars = "atach";
    cout << countCharacters(words, chars);
}