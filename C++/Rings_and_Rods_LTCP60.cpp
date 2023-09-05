#include<bits/stdc++.h>
using namespace std;

int countPoints(string rings) {
    int n = rings.length();
    int red[10], green[10], blue[10];

    for (int i = 0; i < 10; i++) {
        red[i] = 0;
        blue[i] = 0;
        green[i] = 0;
    }

    for (int i = 1; i < n; i+=2) {
        if (rings[i-1] == 'R') {
            red[rings[i] - '0'] += 1;
        }
        else if (rings[i-1] == 'G') {
            green[rings[i] - '0'] += 1;
        }
        else if (rings[i-1] == 'B') {
            blue[rings[i] - '0'] += 1;
        }
    }

    int count = 0;
    for (int i = 0; i < 10; i++) {
        cout << red[i] << " " << green[i] << " " << blue[i] << endl;
        if ((red[i] != 0) && (green[i] != 0) && (blue[i] != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    string rings = "B9R9G0R4G6R8R2R9G9";
    cout << countPoints(rings);
}