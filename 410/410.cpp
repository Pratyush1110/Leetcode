#include<bits/stdc++.h>
using namespace std;

int countPartitions(vector<int>& nums, int maxSum){
    int partitions = 1;
    long long currentSum = 0;
    for(int num : nums){
        if(currentSum + num <= maxSum){
            currentSum += num;
        }else{
            partitions++;
            currentSum = num;
        }
    }
    return partitions;
}

int splitArray(vector<int>& nums, int k){
    int low = *max_element(nums.begin(), nums.end());
    long long high = accumulate(nums.begin(), nums.end(), 0LL);
    int ans = high;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(countPartitions(nums, mid) <= k){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {7, 2, 5, 10, 8};
    cout << splitArray(nums, 2) << endl;
    
    return 0;
}