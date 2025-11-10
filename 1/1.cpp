#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    map<int, int>mpp;
    for(int i=0; i<nums.size(); i++){
        int a = nums[i];
        int b = target - a;
        if(mpp.find(b) != mpp.end()){
            return {mpp[b], i};
        }
        mpp[a] = i;
    }
    return {};
}

int main(){
    vector<int>ans = {11, 2, 7, 15};
    ans = twoSum(ans, 9);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}