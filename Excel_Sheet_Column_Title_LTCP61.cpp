#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    string res;

    while (columnNumber) {
        columnNumber--;
        res += (char)((columnNumber) % 26 + 'A');
        columnNumber = columnNumber/26;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int columnNumber = 701;
    cout << convertToTitle(columnNumber);
}