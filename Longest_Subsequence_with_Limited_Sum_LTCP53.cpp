#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int>& array) {
    int n = array.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i != n-1) {
            cout << ", ";
        }
    }
    cout << "]";
}

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size(), m = queries.size();
    long long int sum = 0, count = 0;
    vector<int> answer(m);

    sort(nums.begin(), nums.end());         // 1, 2, 4, 5

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((sum += nums[j]) <= queries[i]) {
                count++;
            }
        }
        answer[i] = count;
        sum = 0;
        count = 0;
    }
    print_array(answer);
    return answer;
 }

int main() {
    vector<int> nums{2,3,4,5}, queries{1};
    answerQueries(nums, queries);
    return 0;
}
    
    /*for (int i = 0, j = 0; i < n, j < m;) {
        if (sum > queries[j]) {
            answer[j] = count; 
            j++;               
            i = 0;         
            sum = 0;       
            count = 0;      
        }
        else if (sum <= queries[j]) {
            sum += nums[i];                 
            i++;                            
            count++;                        
        }
    }*/