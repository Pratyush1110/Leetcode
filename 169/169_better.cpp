#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    map<int, int>mpp;

    for(int i=0; i<n; i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]] > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    vector<int>ans = {2,2,1,1,1,2,2};
    int soln = majorityElement(ans);
    cout << soln << endl;

    return 0;
}