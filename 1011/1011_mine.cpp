#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& weights, int days, int capacity){
    int current_load = 0;
    int days_needed = 1;

    for (int w : weights) {
        if (current_load + w > capacity) {
            days_needed++;
            current_load = w;
        } else {
            current_load += w;
        }
    }
    
    return days_needed <= days;
}

int shipWithinDays(vector<int>& weights, int days){
    int maxElement = INT_MIN;
    int sum = 0;
    for(int i=0; i<weights.size(); i++){
        sum += weights[i];
        maxElement = max(maxElement, weights[i]);
    }

    int low = maxElement, high = sum;
    int ans = high;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(possible(weights, days, mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << shipWithinDays(nums, 5) << endl;
    
    return 0;
}