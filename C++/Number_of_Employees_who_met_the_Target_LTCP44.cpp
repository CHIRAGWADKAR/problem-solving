#include<bits/stdc++.h>
#include<vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int s = hours.size(), count = 0;
    sort(hours.begin(), hours.end());
    reverse(hours.begin(), hours.end());

    for (int i = 0; i < s; i++) {
        if (hours[i] >= target) {
            count++;
        } else if (hours[i] < target) break;
    }
    return count;
}

int main() {
    vector<int> hours{0,1,2,3,4};
    int target = 2;
    cout << numberOfEmployeesWhoMetTarget(hours, target);
}