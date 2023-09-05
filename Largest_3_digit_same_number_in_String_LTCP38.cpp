#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string largestGoodInteger(string num) {
    int n = num.length();
    int count = 0;
    string good = "";

    for (int i = 1; i < n; i++) {
        if(num[i] == num[i-1]) {
            count++;
            if (count == 2) {
                good.push_back(num[i-1]);
                break;
            }
        }
    }
    return good+good+good;
}

int main() {
    string num = "6777133339";
    cout << largestGoodInteger(num);
}