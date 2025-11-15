//BAD TIME AND SPACE COMP

#include<bits/stdc++.h>
using namespace std;

vector<int>majorityElement(vector<int>& nums){
    vector<int>ans;
    map<int, int>mpp;
    int n = floor(nums.size()/3) + 1;
    for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]] == n){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main(){
    vector<int>q = {7,1,7,7,7,7,7,7};
    vector<int>ans = majorityElement(q);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}