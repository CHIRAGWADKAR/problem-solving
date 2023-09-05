#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string columnTitle) {
    int l = columnTitle.length();
    int result = 0;

    for (int i = 0; i < l; i++) {
        result *= 26;
        result += columnTitle[i] - 65 + 1;
    }
    return result;
}

int main() {
    string columnTitle = "AAA";
    cout << titleToNumber(columnTitle);
}