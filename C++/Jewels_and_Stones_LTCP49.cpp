#include<bits/stdc++.h>
#include<cstring>
using namespace std;

 int numJewelsInStones(string jewels, string stones) {
    int s1 = jewels.length(), s2 = stones.length();
    int count = 0;

    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (jewels[i] == stones[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string jewels = "aA", stones = "aAAbbbb";
    cout << numJewelsInStones(jewels, stones);
}