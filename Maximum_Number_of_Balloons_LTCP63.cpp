#include<bits/stdc++.h>
#include<string>
using namespace std;

int maxNumberOfBalloons(string text) {
    string balloon = "balloon";
    int n1 = balloon.length();
    int size_hash = 5;
    int hash[size_hash];

    for (int i = 0; i < size_hash; i++) {
        hash[i] = 0;
    }

    int n2 = text.length();
    for (int i = 0; i < n2; i++) {
        switch (text[i])
        {
        case 'b':
            hash[0]++;
            break;
        case 'a':
            hash[1]++;
            break;
        case 'l':
            hash[2]++;
            break;
        case 'o':
            hash[3]++;
            break;
        case 'n':
            hash[4]++;
            break;
        default:
            break;
        }
    }
    hash[2] = hash[2]/2;
    hash[3] = hash[3]/2;
    for (int i = 0; i < size_hash; i++) {
        cout << hash[i] << " ";
    }
    cout << endl;
    return *min_element(hash, hash+size_hash);
}

int main() {
    string text = "nlaebolko";
    cout << maxNumberOfBalloons(text);
}