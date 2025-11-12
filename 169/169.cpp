#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    map<int, int>mpp;
    for(int i=0; i<10; i++){
        mpp[i] = 0;
    }

    for(int i=0; i<n; i++){
        mpp[nums[i]]++;
    }

    int highest = -1;
    int highestindex = -1;

    for(auto it : mpp){
        if(it.second > highest){
            highest = it.second;
            highestindex = it.first;
        }
    }

    return highestindex;
}

int main(){
    vector<int>ans = {2,2,1,1,1,2,2};
    int soln = majorityElement(ans);
    cout << soln << endl;

    return 0;
}