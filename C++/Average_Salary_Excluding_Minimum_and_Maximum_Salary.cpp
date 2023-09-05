#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

double average(vector<int> salary) {
    int n = salary.size();
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += salary[i];
    }

    double max_sal = *max_element(salary.begin(), salary.end());
    double min_sal = *min_element(salary.begin(), salary.end());

    double min_max = sum -  max_sal - min_sal;

    double avg = min_max/(n-2);

    return avg;
}

int main() {
    vector<int> sal{1000,2000,3000};
    cout << average(sal);
    return 0;
}

