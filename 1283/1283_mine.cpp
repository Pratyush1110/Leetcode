#include<bits/stdc++.h>
using namespace std;

int ret(vector<int>& nums, int k){
    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        ans += ceil((double)nums[i]/k);
    }
    return ans;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int  maxi=INT_MIN;
    for(int i=0; i<nums.size(); i++){
        maxi = max(maxi, nums[i]);
    }
    int ans = maxi;

    int low = 1, high = maxi;
    while(low <= high){
        int mid = (low + high) / 2;
        int k = ret(nums, mid);
        if(k <= threshold){
            ans = min(ans, mid);
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {1, 2, 5, 9};
    cout << smallestDivisor(nums, 6) << endl;
    
    return 0;
}